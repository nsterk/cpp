/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:51:56 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/21 22:57:56 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {

	std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap constructor called for " << name << std::endl;
	setName(name);
	setHitPts(100);
	setEnergyPts(100);
	setAttackDmg(30);
}

void	FragTrap::highFivesGuys(void) {

	std::cout << "High five y'all!!! With positivity!" << std::endl;
}
