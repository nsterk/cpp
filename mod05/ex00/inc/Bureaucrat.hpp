/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 20:19:33 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/07 21:04:45 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat const &original);
		~Bureaucrat(void);
	
		std::string			getName(void) const;
		unsigned int		getGrade(void) const;
		void				setGrade(unsigned int grade);
		// void		incrementGrade(void);
		// void		decrementGrade(void);

		Bureaucrat&	operator=(Bureaucrat const &rhs);

		private:
			std::string	const	_name;
			unsigned int		_grade;
};

#endif
