/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:17:01 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/30 13:24:42 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(Cat const &original);
		Cat(std::string name);
		virtual ~Cat(void);
	
		Cat&	operator=(Cat const &rhs);
		
		void	makeSound(void) const;
		Brain*	getBrain(void) const;
		void	randomThought(void) const;
	
	private:

		Brain*	_brain;
		void	ponderLife(void);
};

#endif