/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 19:10:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/11 17:05:09 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void	instantiateTooHigh(void) {

	try {
		Bureaucrat a("Timmermans", 0);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

void	instantiateTooLow(void) {
	
	try {
		Bureaucrat a("Timmermans", 151);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

void	decrement(void) {

	Bureaucrat a("Timmermans", 150);

	std::cout << a << std::endl;
	try {
		a.decrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

void	increment(void) {

	Bureaucrat a("Timmermans", 1);

	std::cout << a << std::endl;
	try {
		a.incrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Bureaucrat momo("Momo", 100);
	Form a("Admission", 10, 10);
	std::cout << a << std::endl;
	try {
	a.beSigned(momo);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
		std::cout << a << std::endl;

	momo.setGrade(1);
	try {
	a.beSigned(momo);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << a << std::endl;
	return (0);
}