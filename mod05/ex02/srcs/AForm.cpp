/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:48:35 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/05 15:44:06 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/** Exception handling */

class	AForm::GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form exception: grade too high");
				}
		};

class	AForm::GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form exception: grade too low");
				}
		};

class	AForm::ExecutionException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form exception: unable to execute form");
				}
		};
		
/* Constructors & destructor */

AForm::AForm(void) : _signGrade(150), _execGrade(150), _signed(false) {
}

AForm::AForm(std::string name, unsigned int sign, unsigned int exec) : _name(name), _signGrade(sign), _execGrade(exec), _signed(false) {
	if (_signGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1) {
		throw GradeTooHighException();
	}
	std::cout << ""GRN << _name << RST" constructed" << std::endl;
}

AForm::AForm(AForm const &original) : _name(original.getName()), _signGrade(original.getSignGrade()), _execGrade(original.getExecGrade()), _signed(false), _target(original.getTarget()) {
	std::cout << ""L_GRN << _name << RST" copied" << std::endl;
}

AForm::~AForm(void) {
	std::cout << ""PRETTY_RED << _name << RST" destroyed" << std::endl;
}

/* Getters */

std::string	AForm::getName(void) const {
	return (_name);
}

unsigned int	AForm::getSignGrade(void) const {
	return (_signGrade);
}

unsigned int	AForm::getExecGrade(void) const {
	return (_execGrade);
}

bool			AForm::getSignature(void) const {
	return (_signed);
}

std::string		AForm::getTarget(void) const {
	return (_target);
}

void			AForm::setTarget(const std::string &target) {
	_target = target;
}

/* Methods */

void			AForm::beSigned(Bureaucrat &b) {
	b.signForm(*this);
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	else
		_signed = true;
}

void			AForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > _execGrade || _signed == false)
		throw ExecutionException();
	else
		action();
}

/** Operator overloads */

std::ostream&	operator<<(std::ostream& out, AForm const &obj) {

	std::string status;
	if (!obj.getSignature())
		status = "Unsigned \"";
	else
		status = "Signed \"";
	out << status << obj.getName() << "\", sign grade: " << obj.getSignGrade() << ", execution grade: " << obj.getExecGrade();
	return (out);
}
