/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:31:11 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 15:11:10 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm(void);
	
		std::string	getName(void) const;
		void		action(void) const;
};

#endif