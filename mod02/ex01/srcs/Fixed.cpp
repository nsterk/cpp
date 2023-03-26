/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:16 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/20 18:33:54 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

/* Constructors & destructor */

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const int number) : _value(number << _fractionalBits) {}

Fixed::Fixed(const float number) : _value(roundf(number * (1 << _fractionalBits))){}

Fixed::Fixed(Fixed const &original) : _value(original._value) {}

Fixed::~Fixed(void) {}

/*	Member functions */

int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;	
}

float	Fixed::toFloat(void) const {

	return (float(_value) / float(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {

	return (_value >> _fractionalBits);
}

/*	Operator overloads */

Fixed&			Fixed::operator=(Fixed const &rhs) {

	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Fixed const &f) {

	out << f.toFloat();
	return (out);
}
