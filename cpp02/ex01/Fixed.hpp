//
// Created by casubmar on 25.11.2020.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const& src);
	~Fixed();
	Fixed& operator=(Fixed const& rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int 				_fixedNumber;
	static const int 	_litteral = 8;


};

std::ostream& operator<<(std::ostream& o, Fixed const& src);


#endif //EX01_FIXED_HPP
