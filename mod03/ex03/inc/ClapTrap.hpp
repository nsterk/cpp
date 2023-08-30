/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 17:47:07 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 22:41:43 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include "colours.hpp"

# define HP 10
# define EP 10
# define AD 0

class ClapTrap {

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &original);
		virtual ~ClapTrap(void);

		std::string		getName(void) const;
		virtual unsigned int	getHP(void) const;
		unsigned int	getEP(void) const;
		unsigned int	getAD(void) const;

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap&		operator=(ClapTrap const &rhs);
	
	protected:
	
		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackDmg;
		
};

std::ostream&	operator<<(std::ostream& out, ClapTrap const &d);

#endif
