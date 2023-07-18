/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:50:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/13 14:48:17 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &original);
		~FragTrap(void);
	
		FragTrap&	operator=(FragTrap const &rhs);
		void		highFivesGuys(void);
};

#endif