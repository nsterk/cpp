/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:51:56 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 14:21:55 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << "A FragTrap spawned" << std::endl;
}

FragTrap::~FragTrap(void) {

	std::cout << "A FragTrap died" << std::endl;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap " << name << " was born" << std::endl;
	setName(name);
	setHP(100);
	setEP(100);
	setAD(30);
}

FragTrap::FragTrap(FragTrap const &original) {

	*this = original;
	setName(this->getName().append(" 2"));
	std::cout << "FragTrap " << this->getName() << " was cloned from FragTrap " << original.getName() << std::endl;
};

FragTrap&	FragTrap::operator=(FragTrap const &rhs) {

	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setAD(rhs.getAD());
	return (*this);
};

void	FragTrap::highFivesGuys(void) {

	std::cout << "High five y'all!!! With positivity!" << std::endl;
}
