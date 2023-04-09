/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/09 17:38:45 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void) {
	/* Subject example */
	{
		std::cout << GRN"Subject example"RST << std::endl;
		Fixed a;
		Fixed b(a);
		Fixed c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	/* Additional tests */
	{
		std::cout << GRN"Additional tests"RST << std::endl;
		Fixed a;
		Fixed b;
		
		a.setRawBits(10);
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;

		b = a;
		std::cout << b.getRawBits() << std::endl;

	}
	return (0);	
}