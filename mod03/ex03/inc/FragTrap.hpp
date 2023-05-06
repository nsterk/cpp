/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:50:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 16:16:23 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		~FragTrap(void);
		
		void	highFivesGuys(void);

	protected:
		const unsigned int	_hitPts;
		const unsigned int	_attackDmg;
		const unsigned int	_energyPts;
};

#endif