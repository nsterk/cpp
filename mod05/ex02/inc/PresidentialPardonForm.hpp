/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:51:05 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/05 14:37:35 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	PRESIDENTIALPARDONFORM_HPP
# define	PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	public:
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm(void);
	
		std::string	getName(void) const;
		void	action(void) const;
};

#endif