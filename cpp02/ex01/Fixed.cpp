//
// Created by casubmar on 25.11.2020.
//

#include "Fixed.hpp"

Fixed::Fixed(): _fixedNumber(0) { std::cout << "Default constructor called\n"; }

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::Fixed(const int num) {
	this->_fixedNumber = num * (1 << this->_litteral);
}

Fixed::Fixed(const float num) {
	this->_fixedNumber = (int)roundf(num * (1 << this->_litteral));
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

Fixed & Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called\n";
	if (this != &rhs) {
		this->_fixedNumber = rhs.getRawBits();
	}
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return this->_fixedNumber;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called\n";
	this->_fixedNumber = raw;
}

float Fixed::toFloat() const {
	return (float)this->_fixedNumber / (1 << this->_litteral);
}

int Fixed::toInt() const {
	return this->_fixedNumber / (1 << this->_litteral);
}

std::ostream & operator<<(std::ostream& o, const Fixed &src) {
	o << src.toFloat();
	return o;
}