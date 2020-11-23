//
// Created by casubmar on 23.11.2020.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human {

public:
	Human();
	~Human();

	const Brain&	getBrain() const;
	std::string 	identify() const;

private:
	Brain _brain;
};


#endif //EX05_HUMAN_HPP
