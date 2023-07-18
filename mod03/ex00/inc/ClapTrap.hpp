/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 17:47:07 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/13 15:46:34 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

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
		void			setHitPts(unsigned int amount);
		void			setEnergyPts(unsigned int amount);
		void			setAttackDmg(unsigned int amount);
	
		std::string		getName(void) const;
		unsigned int	getHitPts(void) const;
		unsigned int	getEnergyPts(void) const;
		unsigned int	getAttackDmg(void) const;

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
