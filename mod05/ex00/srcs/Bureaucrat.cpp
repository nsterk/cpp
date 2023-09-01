/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 20:22:57 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/01 17:18:59 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colours.hpp"

Bureaucrat::Bureaucrat(void) {
	
	std::cout << "Default bureaucrat constructed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade) {

	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	std::cout << "Bureaucrat "GRN << name << RST" constructed" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &original) : _name(original.getName()), _grade(original.getGrade()){

	std::cout << "copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){

	std::cout << "Bureaucrat "PRETTY_RED << _name << RST" destroyed" << std::endl;
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

void	Bureaucrat::incrementGrade(void) {
	this->_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void) {
	this->_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const &obj) {
	
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
