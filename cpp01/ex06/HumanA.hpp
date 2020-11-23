//
// Created by casubmar on 23.11.2020.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack() const;

private:
	Weapon&		_weapon;
	std::string	_name;
};


#endif //EX06_HUMANA_HPP
