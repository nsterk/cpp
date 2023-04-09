/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/09 16:30:59 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "colours.hpp"
#include <iostream>

int	main(void) {

	/* Subject example */
	{
		std::cout << GRN"Subject example"RST << std::endl;
		
		Fixed		a;
		Fixed const b( 10 );
		Fixed const c( 42.42f);
		Fixed const d( b );
		
		a = Fixed( 1234.4321f );
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	/* Additional tests */
	{
		std::cout << GRN"Additional tests"RST << std::endl;
		
		Fixed		a( -10 );
		Fixed		b( -105.3f );
	
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	}
	return (0);
}
