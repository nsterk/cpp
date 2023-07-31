/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/14 13:48:43 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/26 15:55:57 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include "colours.hpp"

class WrongAnimal {

	public:

		WrongAnimal(void);
		~WrongAnimal(void);

		void			makeSound(void) const;
		std::string		getType(void) const;
		// void		setType(std::string &type);
	
	protected:
	
		std::string	_type;
};

#endif