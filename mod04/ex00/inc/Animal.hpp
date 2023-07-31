/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/14 13:48:43 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/30 12:57:12 by nsterk        ########   odam.nl         */
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
		Animal(std::string name);
		virtual ~Animal(void);
		Animal(Animal const &original);
		Animal&	operator=(Animal const &rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		// void		setType(std::string &type);

		std::string	name;
	
	protected:

		std::string	_type;
};

#endif