//
// Created by casubmar on 23.11.2020.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <string>

class Weapon {

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType() const;
	void 				setType(std::string type);

private:
	std::string _type;
};


#endif //EX06_WEAPON_HPP
