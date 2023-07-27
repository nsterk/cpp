/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/14 13:48:43 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 16:59:25 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "colours.hpp"

class Animal {

	public:

		Animal(void);
		~Animal(void);
		Animal(Animal const &original);
		Animal&	operator=(Animal const &rhs);

		void	makeSound(void) const;
		std::string		getType(void) const;
		// void		setType(std::string &type);
	
	protected:

		std::string	_type;
};

#endif