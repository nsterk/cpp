/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 20:22:57 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/03 01:32:58 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "colours.hpp"

class	Bureaucrat::GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too high");
				}
};
		
class	Bureaucrat::GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low");
				}
};

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
	return (_name);
}

unsigned int	Bureaucrat::getGrade(void) const {
	return (_grade);
}

void			Bureaucrat::setGrade(unsigned int grade) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
	std::cout << _name << "'s grade set to " << _grade << std::endl;
}


void			Bureaucrat::signForm(Form const &form) {
	if (this->_grade > form.getSignGrade())
		std::cout << _name << " couldn't sign " << form.getName() << " form because their grade (" << _grade << ") doesn't meet the min requirement (" << form.getSignGrade() <<")" << std::endl;
	else
		std::cout << _name << " signed " << form.getName() << " form" << std::endl;
}

void	Bureaucrat::incrementGrade(void) {
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void) {
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs) {

	_grade = rhs.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const &obj) {
	
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
