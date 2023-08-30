/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:51:56 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 22:44:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {

	std::cout << "A "L_GRN"FragTrap"RST" spawned" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "FragTrap "L_GRN << name << RST" was born" << std::endl;
	_name = name;
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap(FragTrap const &original) : ClapTrap(original) {

	*this = original;
	_name = (original._name + " 2");
	std::cout << "FragTrap "L_GRN << this->getName() << RST" was"L_GRN" cloned"RST" from FragTrap " << original.getName() << std::endl;
};

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap "PRETTY_RED << getName() << RST" died" << std::endl;
};

void	FragTrap::highFivesGuys(void) {

	std::cout << "High five y'all!!! With positivity!" << std::endl;
}

/** Operator overloads */

FragTrap&	FragTrap::operator=(FragTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return (*this);
};

std::ostream&	operator<<(std::ostream& out, FragTrap const &d) {

	out << MAGENTA"   FragTrap " << d.getName() << " stats"RST << std::endl;
	out << "--------------------" << std::endl;
	out << "Hit points:     " << d.getHP() << std::endl;
	out << "Energy points:  " << d.getEP() << std::endl;
	out << "Attack damage:  " << d.getAD() << std::endl;
	out << "--------------------";
	return (out);
}
