/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:16 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/29 20:57:43 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>

Fixed::Fixed(void) : _value(0) {

	std::cout << "Default Fixed constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << "Fixed destructor called" << std::endl;	

}