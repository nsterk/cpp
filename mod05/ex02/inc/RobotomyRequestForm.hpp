/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:31:11 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/04 17:49:38 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

	public:
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm(void);
	
		std::string	getName(void) const;
		void		action(void);
};

#endif