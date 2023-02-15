/**
* simpleforwarder API generated from simpleforwarder.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "SimpleforwarderJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

SimpleforwarderJsonObject::SimpleforwarderJsonObject() {
  m_nameIsSet = false;
  m_portsIsSet = false;
  m_actionsIsSet = false;
}

SimpleforwarderJsonObject::SimpleforwarderJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_portsIsSet = false;
  m_actionsIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("ports")) {
    for (auto& item : val["ports"]) {
      PortsJsonObject newItem{ item };
      m_ports.push_back(newItem);
    }

    m_portsIsSet = true;
  }

  if (val.count("actions")) {
    for (auto& item : val["actions"]) {
      ActionsJsonObject newItem{ item };
      m_actions.push_back(newItem);
    }

    m_actionsIsSet = true;
  }
}

nlohmann::json SimpleforwarderJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_ports) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["ports"] = jsonArray;
    }
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_actions) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["actions"] = jsonArray;
    }
  }

  return val;
}

std::string SimpleforwarderJsonObject::getName() const {
  return m_name;
}

void SimpleforwarderJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool SimpleforwarderJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



const std::vector<PortsJsonObject>& SimpleforwarderJsonObject::getPorts() const{
  return m_ports;
}

void SimpleforwarderJsonObject::addPorts(PortsJsonObject value) {
  m_ports.push_back(value);
  m_portsIsSet = true;
}


bool SimpleforwarderJsonObject::portsIsSet() const {
  return m_portsIsSet;
}

void SimpleforwarderJsonObject::unsetPorts() {
  m_portsIsSet = false;
}

const std::vector<ActionsJsonObject>& SimpleforwarderJsonObject::getActions() const{
  return m_actions;
}

void SimpleforwarderJsonObject::addActions(ActionsJsonObject value) {
  m_actions.push_back(value);
  m_actionsIsSet = true;
}


bool SimpleforwarderJsonObject::actionsIsSet() const {
  return m_actionsIsSet;
}

void SimpleforwarderJsonObject::unsetActions() {
  m_actionsIsSet = false;
}


}
}
}

