/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 19:10:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/04 21:47:17 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	doShrubbery(Bureaucrat &b) {

	ShrubberyCreationForm form("codam");
	std::cout << form << std::endl;
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << form << std::endl;
	b.setGrade(1);
	try {
	form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << form << std::endl;
	form.action();
}

void	doRobotomy(Bureaucrat &b) {

	RobotomyRequestForm form("Kanye");

	std::cout << form << std::endl;
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	b.setGrade(70);
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << form << std::endl;
	try {
		form.execute(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	b.setGrade(30);
	try {
		form.execute(b);
		form.execute(b);
		form.execute(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

void	doPardon(Bureaucrat &b) {

	PresidentialPardonForm form("Kanye");

	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << form << std::endl;
	form.execute(b);
}

int main(void)
{
	Bureaucrat momo("Momo", 150);

	// doShrubbery(momo);
	doRobotomy(momo);
	// doPardon(momo);
	return (0);
}