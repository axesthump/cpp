//
// Created by casubmar on 23.11.2020.
//

#include "Human.hpp"

Human::Human() {;}
Human::~Human() {;}

const Brain& Human::getBrain() const {
	return (this->_brain);
}

std::string Human::identify() const {
	return (this->_brain.identify());
}