/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 20:22:57 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/07 21:03:52 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("unknown"), _grade(150) {
	
	std::cout << "Default bureaucrat constructed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) {
	std::cout << "Bureaucrat " << name << " constructed" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &original){

	*this = original;
	std::cout << "copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){

	std::cout << "Bureaucrat destroyed" << std::endl;
}
	
std::string Bureaucrat::getName(void) const {

	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

void	Bureaucrat::setGrade(unsigned int grade) {
	_grade = grade;
}

// void	Bureaucrat::incrementGrade(void) {
// 	this->_grade--;
// }

// void	Bureaucrat::decrementGrade(void) {
// 	this->_grade++;	
// }

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = rhs.getGrade();
	return (*this);
}
