/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 19:10:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/18 17:20:37 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colours.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	doCopying(Bureaucrat &b);

void	doShrubbery(Bureaucrat &b) {

	ShrubberyCreationForm form("codam");

	std::cout << form << std::endl;
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	b.setGrade(144);
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
	b.setGrade(137);
	try {
		b.executeForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

void	doRobotomy(Bureaucrat &b) {

	RobotomyRequestForm form("Kanye");

	b.setGrade(1);
	std::cout << form << std::endl;
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		b.executeForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

void	doPardon(Bureaucrat &b) {

	PresidentialPardonForm form("Yolanthe");
	
	std::cout << form << std::endl;
	try {
		form.beSigned(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		b.executeForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Bureaucrat momo("Momo", 150);

	doShrubbery(momo);
	doRobotomy(momo);
	doPardon(momo);
	return (0);
}

void	doCopying(Bureaucrat &b) {

	PresidentialPardonForm form("Patty");
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
