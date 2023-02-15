/**
* pbforwarder API
* pbforwarder API generated from pbforwarder.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* PortsJsonObject.h
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
class  PortsJsonObject : public JsonObjectBase {
public:
  PortsJsonObject();
  PortsJsonObject(const nlohmann::json &json);
  ~PortsJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Port Name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

private:
  std::string m_name;
  bool m_nameIsSet;
};

}
}
}
}

