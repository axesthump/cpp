//
// Created by casubmar on 23.11.2020.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP

#include <string>

class Zombie {

public:
	Zombie();
	Zombie(std::string type, std::string name);
	~Zombie();

	void announce() const;

private:
	std::string _type;
	std::string _name;

};


#endif //EX02_ZOMBIE_HPP
