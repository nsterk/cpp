/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:34:03 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 18:13:39 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &original);
		~ScavTrap(void);
	
		ScavTrap&	operator=(ScavTrap const &rhs);
		
		void		guardGate(void);
		void		attack(const std::string &target);
};

std::ostream&	operator<<(std::ostream& out, ScavTrap const &d);


#endif