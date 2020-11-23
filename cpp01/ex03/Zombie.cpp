//
// Created by casubmar on 23.11.2020.
//

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie() {
	this->_name = ZombieHorde::names[rand() % 5];
	this->_type = "DEF";
}

Zombie::~Zombie() {
	std::cout << "I`m dead.......\n";
}

void Zombie::announce() const {
	std::cout << "<" << this->_name << " " << this->_type << "> Braiiiiiiinnnssss...\n";
}