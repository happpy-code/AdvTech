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



#include "RulePortForwardingEntryJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RulePortForwardingEntryJsonObject::RulePortForwardingEntryJsonObject() {
  m_idIsSet = false;
  m_externalIpIsSet = false;
  m_externalPortIsSet = false;
  m_protoIsSet = false;
  m_internalIpIsSet = false;
  m_internalPortIsSet = false;
}

RulePortForwardingEntryJsonObject::RulePortForwardingEntryJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_idIsSet = false;
  m_externalIpIsSet = false;
  m_externalPortIsSet = false;
  m_protoIsSet = false;
  m_internalIpIsSet = false;
  m_internalPortIsSet = false;


  if (val.count("id")) {
    setId(val.at("id").get<uint32_t>());
  }

  if (val.count("external-ip")) {
    setExternalIp(val.at("external-ip").get<std::string>());
  }

  if (val.count("external-port")) {
    setExternalPort(val.at("external-port").get<uint16_t>());
  }

  if (val.count("proto")) {
    setProto(val.at("proto").get<std::string>());
  }

  if (val.count("internal-ip")) {
    setInternalIp(val.at("internal-ip").get<std::string>());
  }

  if (val.count("internal-port")) {
    setInternalPort(val.at("internal-port").get<uint16_t>());
  }
}

nlohmann::json RulePortForwardingEntryJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_idIsSet) {
    val["id"] = m_id;
  }

  if (m_externalIpIsSet) {
    val["external-ip"] = m_externalIp;
  }

  if (m_externalPortIsSet) {
    val["external-port"] = m_externalPort;
  }

  if (m_protoIsSet) {
    val["proto"] = m_proto;
  }

  if (m_internalIpIsSet) {
    val["internal-ip"] = m_internalIp;
  }

  if (m_internalPortIsSet) {
    val["internal-port"] = m_internalPort;
  }

  return val;
}

uint32_t RulePortForwardingEntryJsonObject::getId() const {
  return m_id;
}

void RulePortForwardingEntryJsonObject::setId(uint32_t value) {
  m_id = value;
  m_idIsSet = true;
}

bool RulePortForwardingEntryJsonObject::idIsSet() const {
  return m_idIsSet;
}



std::string RulePortForwardingEntryJsonObject::getExternalIp() const {
  return m_externalIp;
}

void RulePortForwardingEntryJsonObject::setExternalIp(std::string value) {
  m_externalIp = value;
  m_externalIpIsSet = true;
}

bool RulePortForwardingEntryJsonObject::externalIpIsSet() const {
  return m_externalIpIsSet;
}



uint16_t RulePortForwardingEntryJsonObject::getExternalPort() const {
  return m_externalPort;
}

void RulePortForwardingEntryJsonObject::setExternalPort(uint16_t value) {
  m_externalPort = value;
  m_externalPortIsSet = true;
}

bool RulePortForwardingEntryJsonObject::externalPortIsSet() const {
  return m_externalPortIsSet;
}



std::string RulePortForwardingEntryJsonObject::getProto() const {
  return m_proto;
}

void RulePortForwardingEntryJsonObject::setProto(std::string value) {
  m_proto = value;
  m_protoIsSet = true;
}

bool RulePortForwardingEntryJsonObject::protoIsSet() const {
  return m_protoIsSet;
}

void RulePortForwardingEntryJsonObject::unsetProto() {
  m_protoIsSet = false;
}

std::string RulePortForwardingEntryJsonObject::getInternalIp() const {
  return m_internalIp;
}

void RulePortForwardingEntryJsonObject::setInternalIp(std::string value) {
  m_internalIp = value;
  m_internalIpIsSet = true;
}

bool RulePortForwardingEntryJsonObject::internalIpIsSet() const {
  return m_internalIpIsSet;
}



uint16_t RulePortForwardingEntryJsonObject::getInternalPort() const {
  return m_internalPort;
}

void RulePortForwardingEntryJsonObject::setInternalPort(uint16_t value) {
  m_internalPort = value;
  m_internalPortIsSet = true;
}

bool RulePortForwardingEntryJsonObject::internalPortIsSet() const {
  return m_internalPortIsSet;
}




}
}
}
}

