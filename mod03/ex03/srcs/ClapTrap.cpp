/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 17:50:29 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 15:47:15 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPts(HP), _energyPts(EP), _attackDmg(AD) {

	// std::cout << "Default ClapTrap constructor called " << std::endl;
};

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPts(HP), _energyPts(EP), _attackDmg(AD) {

	// std::cout << "ClapTrap constructor called for " << name << std::endl;
};

ClapTrap::~ClapTrap(void) {

		// std::cout << "ClapTrap destructor called for " << _name << std::endl;
};

/** Setters */

void	ClapTrap::setName(const std::string &name) {

	_name = name;
}

void	ClapTrap::setHitPts(unsigned int amount) {

	_hitPts = amount;
}

void	ClapTrap::setEnergyPts(unsigned int amount) {

	_energyPts = amount;
}

void	ClapTrap::setAttackDmg(unsigned int amount) {

	_attackDmg = amount;
}

/** Getters */

std::string		ClapTrap::getName(void) const {

	return (_name);
}

unsigned int	ClapTrap::getHitPts(void) const {

	return (_hitPts);
}

unsigned int	ClapTrap::getEnergyPts(void) const {

	return (_energyPts);
}

unsigned int	ClapTrap::getAttackDmg(void) const {

	return (_attackDmg);
}

void	ClapTrap::attack(const std::string &target) {
 
	if (!_energyPts || !_hitPts)
		std::cout << "ClapTrap " << _name << " tries to attack " << target << ", but is too weak" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " brutally attacks " << target << ", causing " << _attackDmg << " points of damage!" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! OUCH!" << std::endl;
};

void	ClapTrap::beRepaired(unsigned int amount) {

	std::cout << "ClapTrap " << _name << " repairs itself! Bam! It has regained " << amount << " hit points!" << std::endl;
};