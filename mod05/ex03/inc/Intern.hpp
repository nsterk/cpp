/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 17:10:02 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/12 17:35:17 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern {

	public:
		Intern(void);
		~Intern(void);
	
		AForm*	makeForm(std::string name, std::string target);
		
};

#endif