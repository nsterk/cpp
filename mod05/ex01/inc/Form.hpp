/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:39:59 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/11 17:12:47 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "colours.hpp"
class Bureaucrat;

class Form {

	public:
		Form(std::string name, unsigned int sign, unsigned int exec);
		Form(Form const &original);
		~Form(void);

		/** Getters */
		std::string		getName(void) const;
		unsigned int	getSignGrade(void) const;
		unsigned int	getExecGrade(void) const;
		bool			getSignature(void) const;

		/** Methods */
		void	beSigned(Bureaucrat &b);

		/** Exceptions */
		class GradeTooHighException;
		class GradeTooLowException;
	
	private:
		std::string const	_name;
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;
		bool				_signed;

		/** Orthodox Canonical Form requires any class to have a default */
		Form(void);
		Form&	operator=(Form const &rhs);
};

std::ostream&	operator<<(std::ostream& out, Form const &obj);

#endif
