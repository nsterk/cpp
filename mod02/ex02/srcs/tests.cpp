/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:59:33 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/26 23:36:42 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/colours.hpp"

/**
 * @brief Demonstrates the + and - operators
 * @param A Instance of Fixed point class
 * @param B Instance of Fixed point class
 */
void	subtractionTests(Fixed const A, Fixed const B) {

	std::cout << U_WHT"Subtraction and addition operators"RESET << std::endl;
	std::cout << "A: " << A << "  B: " << B << std::endl;
	std::cout << "A - B = " << A - B << std::endl;
	std::cout << "B - A = " << B - A << std::endl;
	std::cout << "A - A = " << A - A << std::endl;
	std::cout << "B - B - B = " << B - B - B << std::endl;
}

/**
 * @brief Demonstrates the comparison operators: < > <= >= != ==
 * @param A Instance of Fixed point class
 * @param B Instance of Fixed point class
 */
void	comparisonTests(Fixed const A, Fixed const B) {

	std::cout << U_WHT"Comparison operators"RESET << std::endl;
	std::cout << "A = " << A << "  B = " << B << std::endl;
	std::cout << "A < B: " << (A < B) << std::endl;
	std::cout << "(A + B) < B: " << ((A + B) < B) << std::endl;
	std::cout << "B > A: " << (B > A) << std::endl;
	std::cout << "B <= B: " << (B <= B) << std::endl;
	std::cout << "A >= A: " << (A >= A) << std::endl;
	std::cout << "A == B: " << (A == B) << std::endl;
	std::cout << "A != B: " << (A != B) << std::endl;
}

/**
 * @brief Demonstrates the * and / operators
 * @param A Instance of Fixed point class
 * @param B Instance of Fixed point class
 */
void	multiDiviTests(Fixed const A, Fixed const B) {

	std::cout << U_WHT"Multiplication and division operators"RESET << std::endl;
	std::cout << "A = " << A << "  B = " << B << std::endl;
	std::cout << "A * B: " << A * B << std::endl;
	std::cout << "A / B: " << A / B << std::endl;
	std::cout << "B / A: " << B / A << std::endl;
}

/**
 * @brief Demonstrates the increment and decrement operators
 * @param A Instance of Fixed point class
 * @param B Instance of Fixed point class
 */
void	incrementDecrementTests(void) {

	Fixed a;

	std::cout << U_WHT"Increment and decrement operators"RESET << std::endl;
	std::cout << "a:   " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a:   " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a:   " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a:   " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a:   " << a << std::endl;
}
