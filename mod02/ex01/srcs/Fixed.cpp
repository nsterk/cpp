/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:16 by nsterk        #+#    #+#                 */
/*   Updated: 2023/01/23 17:17:14 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/* Constructors & destructor */

Fixed::Fixed(void) : _value(0) {

	std::cout << "Default Fixed constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
	std::cout << number << std::endl;
	std::cout << "number: " << number << std::endl;
}

Fixed::Fixed(const float number) {

	_value = number / 256;
	std::cout << "number: " << number << std::endl;
	std::cout << "value: " << _value << std::endl;
}

Fixed::Fixed(Fixed &original) : _value(original._value) {
	
	std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << "Fixed destructor called" << std::endl;
}

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
	return (_value * 256);
}

int		Fixed::toInt(void) const {
	return (_value);
}

/*	Operator overloads */

Fixed&	Fixed::operator=(Fixed const &rhs) {

	this->_value = rhs.getRawBits();
	return *this;
}
