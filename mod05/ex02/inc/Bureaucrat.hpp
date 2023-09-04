/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 20:19:33 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/02 21:21:10 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
// #include "Form.hpp"
class Form;

class Bureaucrat {

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &original);
		~Bureaucrat(void);
		
		/** Exceptions */
		class	GradeTooHighException;
		class	GradeTooLowException;

		/** Getters */
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			setGrade(unsigned int grade);

		void			signForm(Form const &form);
		void			incrementGrade(void); //! because 1 is highest and 150 is lowest, incrementing grade means SMALLER number
		void			decrementGrade(void);

		Bureaucrat&	operator=(Bureaucrat const &rhs);

		private:
			std::string	const	_name;
			unsigned int		_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const &obj);

#endif
