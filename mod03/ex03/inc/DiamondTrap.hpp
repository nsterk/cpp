/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 23:07:11 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 16:05:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

	public:
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		~DiamondTrap(void);

	private:
		std::string	_name;
};

std::ostream&	operator<<(std::ostream& out, DiamondTrap const &d);

#endif