#include <iostream>
#include "ZombieEvent.hpp"

int main() {
	ZombieEvent zombieEvent;
	Zombie* z1;
	Zombie* z2;

	std::cout << "---Create zombie with default type---\n";
	z1 = zombieEvent.randomChump();
	z2 = zombieEvent.newZombie("Chuck");
	z2->announce();
	std::cout << "---Kill zombie with default type---\n";
	delete z1;
	delete z2;
	std::cout << "---Create zombie with type BIGBOY---\n";
	zombieEvent.setZombieType("BIGBOY");
	z1 = zombieEvent.randomChump();
	z2 = zombieEvent.newZombie("Chuck");
	z2->announce();
	std::cout << "---Kill zombie with type BIGBOY---\n";
	delete z1;
	delete z2;
	std::cout << "---Create zombie on stack---\n";
	Zombie z3;
	z3.announce();
	Zombie z4;
	z4.announce();
	return (0);
}
