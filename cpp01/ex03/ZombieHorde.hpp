//
// Created by casubmar on 23.11.2020.
//

#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

class ZombieHorde {

public:
	static const std::string names[5];

	ZombieHorde(int n);
	~ZombieHorde();

	void announce() const;

private:
	int 	_countZombies;
	Zombie* _zombies;
};


#endif //EX03_ZOMBIEHORDE_HPP
