/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/05 15:24:04 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 16:06:44 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "colours.hpp"

DiamondTrap::DiamondTrap(void) {

	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "Default DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {

	_name = name;
	_hitPts = FragTrap::_hitPts;
	_attackDmg = FragTrap::_attackDmg;
	_energyPts = ScavTrap::_energyPts;
	// std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

std::ostream&	operator<<(std::ostream& out, DiamondTrap const &d) {

	out << MAGENTA"DiamondTrap " << d.getName() << RST << std::endl;
	out << "----------------------" << std::endl;
	out << "Hit points: " << d.getHitPts() << std::endl;
	out << "Energy points: " << d.getEnergyPts() << std::endl;
	out << "Attack damage: " << d.getAttackDmg() << std::endl;
	out << "----------------------";
	return (out);
}
