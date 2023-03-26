/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/26 23:34:59 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/colours.hpp"
#include <iostream>

void subtractionTests(Fixed A, Fixed B);
void comparisonTests(Fixed const A, Fixed const B);
void multiDiviTests(Fixed const A, Fixed const B);
void incrementDecrementTests(void);

int	main(void) {

	Fixed const A(8);

	subtractionTests(Fixed(-10), Fixed(2.5f));
	comparisonTests(Fixed(1), Fixed(1.005f));
	multiDiviTests(Fixed(5.05f), Fixed(2));
	incrementDecrementTests();

	std::cout << Fixed::min(A, Fixed (8.1f)) << std::endl;
	std::cout << Fixed::max(A, Fixed (8.1f)) << std::endl;
	return (0);
}
