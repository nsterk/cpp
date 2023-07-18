/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:41:02 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/13 15:46:00 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap constructor called for " << name << std::endl;
	setName(name);
	setHitPts(100);
	setEnergyPts(50);
	setAttackDmg(20);
}

ScavTrap::ScavTrap(ScavTrap const &original) {

	*this = original;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs) {

	this->setName(rhs.getName());
	this->setHitPts(rhs.getHitPts());
	this->setEnergyPts(rhs.getEnergyPts());
	this->setAttackDmg(rhs.getAttackDmg());
	return (*this);
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
