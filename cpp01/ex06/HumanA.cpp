//
// Created by casubmar on 23.11.2020.
//

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) { ; }
HumanA::~HumanA() {;}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}