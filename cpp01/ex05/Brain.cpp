//
// Created by casubmar on 23.11.2020.
//

#include "Brain.hpp"

Brain::Brain() { ; };
Brain::~Brain() { ; };

std::string Brain::identify() const {
	std::ostringstream str;
	str << this;
	return (str.str());
}