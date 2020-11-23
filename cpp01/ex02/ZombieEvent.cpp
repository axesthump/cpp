//
// Created by casubmar on 23.11.2020.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _type("DEF") {
	std::srand(time(NULL));
}
ZombieEvent::~ZombieEvent() { ; };

Zombie* ZombieEvent::newZombie(std::string name) const {
	return (new Zombie(this->_type, name));
}

void 	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::randomChump() const {
	std::string names[] = {"John", "Pople", "Sam"};

	Zombie* newZombie = new Zombie(this->_type, names[rand() % 3]);
	newZombie->announce();
	return (newZombie);
}