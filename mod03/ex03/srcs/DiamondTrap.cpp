/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/05 15:24:04 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 22:48:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "colours.hpp"

DiamondTrap::DiamondTrap(void) {

	std::cout << "A DiamondTrap constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {

	_name = name;
	_hitPts = FragTrap::_hitPts;
	std::cout << _hitPts << std::endl;
	_energyPts = ScavTrap::_energyPts;
	std::cout << _energyPts << std::endl;
	_attackDmg = FragTrap::_attackDmg;
	std::cout << "DiamondTrap "L_GRN << _name << RST" was born" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &original) {

	*this = original;
	_name = (original._name + " 2");
	// setName(this->getName().append(" 2"));
	std::cout << "DiamondTrap "L_GRN << this->getName() << RST" was"L_GRN" cloned"RST" from DiamondTrap " << original.getName() << std::endl;
};

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap "PRETTY_RED << _name << RST" died" << std::endl;
}

unsigned int	DiamondTrap::getHP(void) const {

	return (this->_hitPts);
};

/** Operator overloads */

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
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
