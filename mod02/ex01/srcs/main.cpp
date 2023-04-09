/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/09 16:17:04 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void) {

	Fixed const A(69.69f);
	Fixed const B(181.5f);
	Fixed const C(333);
	Fixed		D;

	D = Fixed(1234.4321f);

	std::cout << "value of A as float: " << A.toFloat() << std::endl;
	std::cout << "value of A as int: " << A.toInt() << std::endl;
	std::cout << "value of B as float: " << B.toFloat() << std::endl;
	std::cout << "value of B as int: " << B.toInt() << std::endl;
	std::cout << "value of C as float: " << C.toFloat() << std::endl;
	std::cout << "value of C as int: " << C.toInt() << std::endl;
	std::cout << "value of D as float: " << D.toFloat() << std::endl;
	std::cout << "value of D as int: " << D.toInt() << std::endl;
	return (0);
}
