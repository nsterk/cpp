/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:48:35 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 14:40:28 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "colours.hpp"

/** Exception handling */

class	Form::GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form exception: grade too high");
				}
		};

class	Form::GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form exception: grade too low");
				}
		};
		
/* Constructors & destructor */

Form::Form(void) : _name("default"), _signGrade(150), _execGrade(150), _signed(false) {}

Form::Form(std::string name, unsigned int sign, unsigned int exec) : _name(name), _signGrade(sign), _execGrade(exec), _signed(false) {

	if (_signGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1) {
		throw GradeTooHighException();
	}
	std::cout << "Form "GRN << _name << RST" constructed" << std::endl;
}

Form::Form(const Form &original) : _name(original.getName()), _signGrade(original.getSignGrade()), _execGrade(original.getExecGrade()), _signed(false) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void) {
	std::cout << PRETTY_RED"Form"RST" destroyed" << std::endl;
}

/* Getters */

std::string	Form::getName(void) const {
	return (_name);
}

unsigned int	Form::getSignGrade(void) const {
	return (_signGrade);
}

unsigned int	Form::getExecGrade(void) const {
	return (_execGrade);
}

bool			Form::getSignature(void) const {
	return (_signed);
}

/* Member methods */

void	Form::beSigned(Bureaucrat &b) {

	b.signForm(*this);
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	else
		_signed = true;
}

/** Operator overloads */

std::ostream&	operator<<(std::ostream& out, Form const &obj) {

	std::string status;
	if (!obj.getSignature())
		status = "Unsigned form \""LILA;
	else
		status = "Signed form \""LILA;
	out << status << obj.getName() << RST"\", sign grade: " << obj.getSignGrade() << ", execution grade: " << obj.getExecGrade();
	return (out);
}
