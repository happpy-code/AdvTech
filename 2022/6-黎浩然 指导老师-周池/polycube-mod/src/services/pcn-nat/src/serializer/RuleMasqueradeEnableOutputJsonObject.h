/**
* nat API
* nat API generated from nat.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RuleMasqueradeEnableOutputJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  RuleMasqueradeEnableOutputJsonObject : public JsonObjectBase {
public:
  RuleMasqueradeEnableOutputJsonObject();
  RuleMasqueradeEnableOutputJsonObject(const nlohmann::json &json);
  ~RuleMasqueradeEnableOutputJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// True if the operation is successful
  /// </summary>
  bool getResult() const;
  void setResult(bool value);
  bool resultIsSet() const;
  void unsetResult();

private:
  bool m_result;
  bool m_resultIsSet;
};

}
}
}
}

