//
// Created by casubmar on 23.11.2020.
//

#include "ZombieHorde.hpp"

const std::string ZombieHorde::names[5] = {
		"John",
		"Morty",
		"Thomas",
		"Rick",
		"Sam"
};

ZombieHorde::ZombieHorde(int n): _countZombies(n) {
	std::srand(time(NULL));

	this->_zombies = new Zombie[n];
	announce();
}

ZombieHorde::~ZombieHorde() {
	delete [] _zombies;
}

void ZombieHorde::announce() const {
	for (int i = 0; i < _countZombies; ++i) {
		_zombies[i].announce();
	}
}