/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/01/16 22:35:34 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void) {

	/*	Instantiating instance A of Fixed class with default constructor and
		then using setRawBits member function to set the value to 10. */
	
	Fixed A;
	A.setRawBits(10);
	
	/*	Instantiating B with copy constructor to be a copy of A.
		Instantiating C with default constructor and then using copy assignment
		overload to assign the value of A to C. */
	Fixed B(A);
	Fixed C;

	std::cout << "value of B: " << B.getRawBits() << std::endl;
	A.setRawBits(120);
	C = A;
	std::cout << C.getRawBits() << std::endl;
	return (0);	
}