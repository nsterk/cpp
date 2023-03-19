/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:16 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/19 19:33:25 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

/* Constructors & destructor */

Fixed::Fixed(void) : _value(0) {
	
	// std::cout << "Default Fixed constructor called" << std::endl;
}

Fixed::Fixed(const int number) {

	_value = number << _fractionalBits;
	std::cout << "Fixed constructor called for int value: " << number << std::endl;
}

Fixed::Fixed(const float number) {

	_value = roundf(number * (1 << _fractionalBits));
	std::cout << "Fixed constructor called for float value: " << number << std::endl;
}

Fixed::Fixed(Fixed const &original) : _value(original._value) {
	
	// std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	// std::cout << "Fixed destructor called" << std::endl;
}

/*	Member functions */

int		Fixed::getRawBits(void) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw) {

	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;	
}

float	Fixed::toFloat(void) const {

	// float divider = 1 << _fractionalBits;
	
	return (float(_value) / float(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {

	return (_value >> _fractionalBits);
}

/* Operator overloads */

Fixed&	Fixed::operator=(Fixed const &rhs) {

	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, Fixed const &f) {

	out << f.toFloat();
	return (out);
}

/* Arithmetic operator overloads */

Fixed		Fixed::operator-(Fixed const &rhs) const {

	Fixed	ret;

	ret._value = _value - rhs.getRawBits();
	return (ret);
}

Fixed		Fixed::operator+(Fixed const &rhs) const {

	Fixed	ret;

	ret._value = _value + rhs.getRawBits();
	return (ret);
}

Fixed		Fixed::operator*(Fixed const &rhs) const {

	Fixed	ret;
	// int result = ((long)_value * (long)rhs.getRawBits()) >> _fractionalBits;
	ret.setRawBits(((long)_value * (long)rhs.getRawBits()) >> _fractionalBits);
	return (ret);
}