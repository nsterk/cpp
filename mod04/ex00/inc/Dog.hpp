/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:17:01 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 16:41:12 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:

		Dog(void);
		Dog(Dog const &original);
		~Dog(void);
		Dog&	operator=(Dog const &rhs);
	
		void	makeSound(void) const;
};

#endif