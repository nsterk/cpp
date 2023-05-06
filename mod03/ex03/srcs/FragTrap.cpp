/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:51:56 by nsterk        #+#    #+#                 */
/*   Updated: 2023/05/06 16:15:53 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hitPts(100), _attackDmg(30), _energyPts(100) {

	// std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {

	// std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) :  _hitPts(100), _attackDmg(30), _energyPts(100) {

	setName(name);
	// setHitPts(100);
	// setEnergyPts(100);
	// setAttackDmg(30);
	// std::cout << "FragTrap constructor called for " << getName() << std::endl;
}

void	FragTrap::highFivesGuys(void) {

	std::cout << "High five y'all!!! With positivity!" << std::endl;
}
