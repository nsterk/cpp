/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:16 by nsterk        #+#    #+#                 */
/*   Updated: 2023/01/16 22:16:10 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _value(0) {

	// std::cout << "Default Fixed constructor called" << std::endl;
}

Fixed::Fixed(Fixed &original) : _value(original._value) {
	
	// std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	// std::cout << "Fixed destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw) {

	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;	
}

Fixed&	Fixed::operator=(Fixed const &rhs) {

	this->_value = rhs.getRawBits();
	return *this;
}
