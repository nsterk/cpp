/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:57:58 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/19 21:29:42 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <colours.hpp>
#include <iostream>

static void subtractionTests(void);
static void comparisonTests(void);

int	main(void) {

	Fixed const A(-10);
	Fixed const B(2.5f);
	Fixed const C(5);
	Fixed const D(A + C);
	Fixed const E(Fixed(5.05f) * Fixed(2));
	Fixed const F(Fixed(5.05f) / Fixed(2));

	subtractionTests();
	comparisonTests();
	return (0);
}

static void subtractionTests(void) {

	Fixed const A(-10);
	Fixed const B(2.5f);
	Fixed const C(5);

	std::cout << YELLOW"Subtraction and addition tests"RESET << std::endl;
	std::cout << "A = " << A << "  B = " << B << "  C = " << C << std::endl;
	std::cout << "A - B = " << A - B << std::endl;
	std::cout << "A - C = " << A - C << std::endl;
	std::cout << "C - B = " << C - B << std::endl;
	std::cout << "A - A = " << A - A << std::endl;
	std::cout << "A + B = " << A + B << std::endl;
	std::cout << "A + A = " << A + A << std::endl;
	std::cout << "B + C = " << B + C << std::endl;	
}

static void comparisonTests(void) {

	Fixed const A(1.005f);
	Fixed const B(1);

	std::cout << YELLOW"Comparison operators"RESET << std::endl;
	std::cout << "A = " << A << "  B = " << B << std::endl;
	std::cout << "A < B: " << (A < B) << std::endl;
	std::cout << "A > B: " << (A > B) << std::endl;
	std::cout << "B < A: " << (B < A) << std::endl;
	std::cout << "B <= B: " << (B <= B) << std::endl;
	std::cout << "B >= A: " << (B >= A) << std::endl;
	std::cout << "A >= A: " << (A >= A) << std::endl;
}