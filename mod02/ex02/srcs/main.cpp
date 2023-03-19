/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/19 19:20:13 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <colours.hpp>
#include <iostream>

int	main(void) {

	Fixed const A(-20);
	Fixed const B(5.1f);
	Fixed const C(20);
	Fixed const D(A + C);
	Fixed const E(Fixed(5.05f) * Fixed(2));

	std::cout << GREEN"A = " << A << "    B = " << B << "    C = " << C << RESET << std::endl;
	std::cout << "A - B = " << A - B << std::endl;
	std::cout << "B - C = " << B - C << std::endl;
	std::cout << "C - B = " << C - B << std::endl;
	std::cout << "A + B = " << A + B << std::endl;
	std::cout << "A + A = " << A + A << std::endl;
	std::cout << "A - A = " << A - A << std::endl;
	// std::cout << "value of A as float: " << A.toFloat() << std::endl;
	// std::cout << "value of A as int: " << A.toInt() << std::endl;
	std::cout << "value of B as float: " << B.toFloat() << std::endl;
	std::cout << "value of B as int: " << B.toInt() << std::endl;
	// std::cout << "value of C as float: " << C.toFloat() << std::endl;
	// std::cout << "value of C as int: " << C.toInt() << std::endl;
	// std::cout << "value of D as float: " << D.toFloat() << std::endl;
	// std::cout << "value of D as int: " << D.toInt() << std::endl;
	std::cout << "value of E as float: " << E.toFloat() << std::endl;
	std::cout << "value of E as int: " << E.toInt() << std::endl;
	// std::cout << A << std::endl;
	return (0);
}
