/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 19:10:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 14:55:23 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
#include "Bureaucrat.hpp"
#include "colours.hpp"
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
		b.executeForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	b.setGrade(30);
	b.executeForm(form);
}

void	doPardon(Bureaucrat &b) {

	PresidentialPardonForm form("Kanye");
	PresidentialPardonForm copy(form);
	
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << form << std::endl;
	std::cout << copy << std::endl;
	form.execute(b);
	copy.beSigned(b);
	copy.execute(b);
}

int main(void)
{
	Bureaucrat momo("Momo", 5);

	// doShrubbery(momo);
	// doRobotomy(momo);
	doPardon(momo);
	return (0);
}