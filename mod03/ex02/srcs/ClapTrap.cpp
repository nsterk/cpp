/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 17:50:29 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/11 13:41:20 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	_name = "default";
	_hitPts = HP;
	_energyPts = EP;
	_attackDmg = AD;

	std::cout << "Default ClapTrap constructor called " << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(HP), _energyPts(EP), _attackDmg(AD) {

	_name = name;
	_hitPts = HP;
	_energyPts = EP;
	_attackDmg = AD;

	std::cout << "ClapTrap constructor called for " << name << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &original) {

	this = original;
};

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap destructor called for " << _name << std::endl;
};

/** Getters and setters */

void	ClapTrap::setName(std::string name) {

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

void	ClapTrap::attack(const std::string& target) {
 
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

/** Operator overloads */
ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs) {

	this->_name = rhs._name;
	this->_hitPts = rhs._hitPts;
	this->_energyPts = rhs._energyPts;
	this->_attackDmg = rhs._attackDmg;
	return (*this);
};
