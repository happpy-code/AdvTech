import math
import torch.nn as nn
from collections import OrderedDict

# 默认值
defaultcfg = [64, 64, 'M', 128, 128, 'M', 256, 256, 256, 'M', 512, 512, 512, 'M', 512, 512, 512, 512]
relucfg = [2, 6, 9, 13, 16, 19, 23, 26, 29, 33, 36, 39]
convcfg = [0, 3, 7, 10, 14, 17, 20, 24, 27, 30, 34, 37]


# 生成神经网络的每层
def make_layers(cfg, compress_rate=None):
    layers = nn.Sequential()
    in_channels = 3
    cnt = 0
    for i, v in enumerate(cfg):
        if v == 'M':
            layers.add_module('pool%d' % i, nn.MaxPool2d(kernel_size=2, stride=2))
        else:
            conv2d = nn.Conv2d(in_channels, v, kernel_size=3, padding=1)
            conv2d.cp_rate = compress_rate
            cnt += 1

            layers.add_module('conv%d' % i, conv2d)
            layers.add_module('norm%d' % i, nn.BatchNorm2d(v))
            layers.add_module('relu%d' % i, nn.ReLU(inplace=True))
            in_channels = v

    return layers


class VGG(nn.Module):
    def __init__(self, num_classes=10, init_weights=True, cfg=None, compress_rate=None):
        super(VGG, self).__init__()
        self.features = nn.Sequential()

        # 如果每层的宽度不存在，使用默认值
        if cfg is None:
            cfg = defaultcfg

        # Conv和Relu所在的层
        self.convcfg = convcfg
        self.relucfg = relucfg

        # 保存每层的压缩率
        self.compress_rate = compress_rate

        # 依次生成中间的一层
        self.features = make_layers(cfg[:-1], compress_rate)

        # 分类器
        self.classifier = nn.Sequential(OrderedDict([
            ('linear1', nn.Linear(cfg[-2], cfg[-1])),
            ('norm1', nn.BatchNorm1d(cfg[-1])),
            ('relu1', nn.ReLU(inplace=True)),
            ('linear2', nn.Linear(cfg[-1], num_classes)),
        ]))

        if init_weights:
            self._initialize_weights()

    # 前向传播
    def forward(self, x):
        # 提取特征，也就是计算
        x = self.features(x)

        x = nn.AvgPool2d(2)(x)
        x = x.view(x.size(0), -1)
        x = self.classifier(x)
        return x

    # 初始化权重
    def _initialize_weights(self):
        for m in self.modules():
            if isinstance(m, nn.Conv2d):
                n = m.kernel_size[0] * m.kernel_size[1] * m.out_channels
                m.weight.data.normal_(0, math.sqrt(2. / n))
                if m.bias is not None:
                    m.bias.data.zero_()
            elif isinstance(m, nn.BatchNorm2d):
                m.weight.data.fill_(0.5)
                m.bias.data.zero_()
            elif isinstance(m, nn.Linear):
                m.weight.data.normal_(0, 0.01)
                m.bias.data.zero_()


