//
// Created by casubmar on 23.11.2020.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string type, std::string name): _type(type), _name(name) { ; }

Zombie::Zombie() {
	this->_name = "defaultName";
	this->_type = "defaultType";
}

Zombie::~Zombie() {
	std::cout << "I`m dead.......\n";
}

void Zombie::announce() const {
	std::cout << "<" << this->_name << " " << this->_type << "> Braiiiiiiinnnssss...\n";
}