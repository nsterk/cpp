/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:17:01 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/26 15:09:34 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat(void);
		WrongCat(WrongCat const &original);
		~WrongCat(void);
	
		WrongCat&	operator=(WrongCat const &rhs);
};

#endif