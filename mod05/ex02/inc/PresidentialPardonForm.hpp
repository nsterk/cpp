/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:51:05 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 14:46:32 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	PRESIDENTIALPARDONFORM_HPP
# define	PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm(void);
	
		std::string	getName(void) const;
		void		action(void) const;
};

#endif