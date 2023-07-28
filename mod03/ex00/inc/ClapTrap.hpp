/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 17:47:07 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/25 16:56:06 by nsterk        ########   odam.nl         */
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
		ClapTrap(ClapTrap const &original);
		ClapTrap(std::string name);
		~ClapTrap(void);
		
		void			setName(const std::string &name);
		void			setHP(unsigned int amount);
		void			setEP(unsigned int amount);
		void			setAD(unsigned int amount);
	
		std::string		getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEP(void) const;
		unsigned int	getAD(void) const;

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
		ClapTrap&		operator=(ClapTrap const &rhs);

	private:

		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackDmg;	
};

#endif
