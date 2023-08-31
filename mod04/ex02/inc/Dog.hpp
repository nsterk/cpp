/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:17:01 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/30 13:37:34 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog const &original);
		virtual ~Dog(void);
		
		Dog&	operator=(Dog const &rhs);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
		void	randomThought(void) const;
	
	private:
		Brain*	_brain;
		void	ponderLife(void);
};

#endif