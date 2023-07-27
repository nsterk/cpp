/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:17:01 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 15:26:44 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(Cat const &original);
		Cat&	operator=(Cat const &rhs);
		~Cat(void);
	
		void	makeSound(void) const;
};

#endif