/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:34:03 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 16:07:38 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		~ScavTrap(void);
		
		void	guardGate(void);
	
	protected:
		const unsigned int	_energyPts;
};

#endif