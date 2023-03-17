/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/17 22:11:43 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <colours.hpp>
#include <iostream>

int	main(void) {

	Fixed const A(-20);
	Fixed const B(7.9f);
	Fixed const C(20);
	Fixed const D(A + C);

	std::cout << GREEN"A = " << A << "    B = " << B << "    C = " << C << RESET << std::endl;
	std::cout << "A - B = " << A - B << std::endl;
	std::cout << "B - C = " << B - C << std::endl;
	std::cout << "C - B = " << C - B << std::endl;
	std::cout << "A + B = " << A + B << std::endl;
	// std::cout << "value of A as float: " << A.toFloat() << std::endl;
	// std::cout << "value of A as int: " << A.toInt() << std::endl;
	// std::cout << "value of B as float: " << B.toFloat() << std::endl;
	// std::cout << "value of B as int: " << B.toInt() << std::endl;
	// std::cout << "value of C as float: " << C.toFloat() << std::endl;
	// std::cout << "value of C as int: " << C.toInt() << std::endl;
	// std::cout << "value of D as float: " << D.toFloat() << std::endl;
	// std::cout << "value of D as int: " << D.toInt() << std::endl;
	// std::cout << A << std::endl;
	return (0);
}
