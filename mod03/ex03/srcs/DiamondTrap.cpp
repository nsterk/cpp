/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/05 15:24:04 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 18:40:11 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "colours.hpp"

DiamondTrap::DiamondTrap(void) {

	std::cout << "A DiamondTrap constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(name), FragTrap(name) {

	_name = name;
	_hitPts = FragTrap::_hitPts;
	_attackDmg = FragTrap::_attackDmg;
	_energyPts = ScavTrap::_energyPts;
	std::cout << "DiamondTrap "L_GRN << name << RST" was born" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &original) {

	*this = original;
	setName(this->getName().append(" 2"));
	std::cout << "DiamondTrap "L_GRN << this->getName() << RST" was"L_GRN" cloned"RST" from DiamondTrap " << original.getName() << std::endl;
};

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap "PRETTY_RED << getName() << RST" died" << std::endl;
}

/** Operator overloads */

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs) {

	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setAD(rhs.getAD());
	return (*this);
};

std::ostream&	operator<<(std::ostream& out, DiamondTrap const &d) {

	out << MAGENTA"DiamondTrap " << d.getName() << RST << std::endl;
	out << "----------------------" << std::endl;
	out << "Hit points: " << d.getHP() << std::endl;
	out << "Energy points: " << d.getEP() << std::endl;
	out << "Attack damage: " << d.getAD() << std::endl;
	out << "----------------------";
	return (out);
}
