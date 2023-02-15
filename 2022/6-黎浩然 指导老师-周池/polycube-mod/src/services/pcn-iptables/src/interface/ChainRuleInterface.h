/**
* iptables API
* iptables API generated from iptables.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* ChainRuleInterface.h
*
*
*/

#pragma once

#include "../serializer/ChainRuleJsonObject.h"


using namespace io::swagger::server::model;

class ChainRuleInterface {
public:

  virtual void update(const ChainRuleJsonObject &conf) = 0;
  virtual ChainRuleJsonObject toJsonObject() = 0;

  /// <summary>
  /// Rule Identifier
  /// </summary>
  virtual uint32_t getId() = 0;

  /// <summary>
  /// Name of the interface via which the packet is received
  /// </summary>
  virtual std::string getInIface() = 0;
  virtual void setInIface(const std::string &value) = 0;

  /// <summary>
  /// Name of the interface via which the packet is going to be sent
  /// </summary>
  virtual std::string getOutIface() = 0;
  virtual void setOutIface(const std::string &value) = 0;

  /// <summary>
  /// Source IP Address.
  /// </summary>
  virtual std::string getSrc() = 0;
  virtual void setSrc(const std::string &value) = 0;

  /// <summary>
  /// Destination IP Address.
  /// </summary>
  virtual std::string getDst() = 0;
  virtual void setDst(const std::string &value) = 0;

  /// <summary>
  /// Level 4 Protocol.
  /// </summary>
  virtual std::string getL4proto() = 0;
  virtual void setL4proto(const std::string &value) = 0;

  /// <summary>
  /// Source L4 Port
  /// </summary>
  virtual uint16_t getSport() = 0;
  virtual void setSport(const uint16_t &value) = 0;

  /// <summary>
  /// Destination L4 Port
  /// </summary>
  virtual uint16_t getDport() = 0;
  virtual void setDport(const uint16_t &value) = 0;

  /// <summary>
  /// TCP flags. Allowed values: SYN, FIN, ACK, RST, PSH, URG, CWR, ECE. ! means set to 0.
  /// </summary>
  virtual std::string getTcpflags() = 0;
  virtual void setTcpflags(const std::string &value) = 0;

  /// <summary>
  /// Connection status (NEW, ESTABLISHED, RELATED, INVALID)
  /// </summary>
  virtual ConntrackstatusEnum getConntrack() = 0;
  virtual void setConntrack(const ConntrackstatusEnum &value) = 0;

  /// <summary>
  /// Action if the rule matches. Default is DROP.
  /// </summary>
  virtual ActionEnum getAction() = 0;
  virtual void setAction(const ActionEnum &value) = 0;
};

