//
// Created by casubmar on 23.11.2020.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

class ZombieEvent {

public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string type);
	Zombie* newZombie(std::string name) const;
	Zombie* randomChump() const;

private:
	std::string _type;
};


#endif //EX02_ZOMBIEEVENT_HPP
