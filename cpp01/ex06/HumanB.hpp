//
// Created by casubmar on 23.11.2020.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void setWeapon(Weapon& weapon);

	void attack() const;

private:
	Weapon*		_weapon;
	std::string	_name;
};


#endif //EX06_HUMANB_HPP
