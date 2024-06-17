/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:39:59 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 15:09:12 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class AForm {

	public:
		AForm(void);
		AForm(std::string name, unsigned int sign, unsigned int exec);
		AForm(AForm const &original);
		virtual ~AForm(void);

		/** Exceptions */
		class GradeTooHighException;
		class GradeTooLowException;
		class ExecutionException;
		
		/** Getters */
		virtual std::string	getName(void) const;
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;
		bool				getSignature(void) const;
		std::string			getTarget(void) const;
		
		/** Setters */
		void				setTarget(const std::string &target);

		/** Methods */
		void				beSigned(Bureaucrat &b);
		void				execute(Bureaucrat const &executor) const;
		virtual void		action(void) const = 0;
		

	private:
		std::string const	_name;
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;
		bool				_signed;
		std::string			_target;
		
		/** Useless operator overload. */
		AForm&	operator=(AForm const &rhs);
		
};

std::ostream&	operator<<(std::ostream& out, AForm const &obj);

#endif
