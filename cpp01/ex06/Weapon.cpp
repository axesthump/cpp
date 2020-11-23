//
// Created by casubmar on 23.11.2020.
//

#include "Weapon.hpp"

Weapon::Weapon() {
	this->_type = "KICKASSER";
}

Weapon::Weapon(std::string type): _type(type) {;}
Weapon::~Weapon() {;}

const std::string& Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
}