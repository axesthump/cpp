//
// Created by casubmar on 23.11.2020.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();

	void announce() const;

private:
	std::string _type;
	std::string _name;

};


#endif //EX02_ZOMBIE_HPP
