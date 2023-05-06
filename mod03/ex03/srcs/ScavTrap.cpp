/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:41:02 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 16:02:38 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	// std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) {

	// std::cout << "ScavTrap constructor called for " << name << std::endl;
	setName(name);
	setHitPts(150);
	setEnergyPts(50);
	setAttackDmg(20);
}

ScavTrap::~ScavTrap(void) {

	// std::cout << "Default ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
