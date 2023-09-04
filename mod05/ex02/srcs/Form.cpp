/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:48:35 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/02 21:25:45 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/** Exception handling */

class	Form::GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too high");
				}
		};

class	Form::GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low");
				}
		};
		
/* Constructors & destructor */

Form::Form(void) : _name("Default form"), _signGrade(150), _execGrade(150), _signed(false) {
	std::cout << "Default form constructor called" << std::endl;
}

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
	std::cout << "Form destructor called" << std::endl;
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

/* Methods */

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
		status = "Unsigned form \"";
	else
		status = "Signed form \"";
	out << status << obj.getName() << "\", sign grade: " << obj.getSignGrade() << ", execution grade: " << obj.getExecGrade();
	return (out);
}
