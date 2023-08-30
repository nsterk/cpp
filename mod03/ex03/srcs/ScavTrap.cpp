/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 20:41:02 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 22:42:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap "L_GRN << name << RST" was born" << std::endl;
	_name = name;
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const &original) {

	*this = original;
	_name = (original._name + " 2");
	std::cout << "ScavTrap "L_GRN << _name << RST" was "L_GRN"cloned "RST"from ScavTrap " << original._name << std::endl;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap "PRETTY_RED << _name << RST" died" << std::endl;
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {

	if (!getEP() || !getHP())
	{
		std::cout << "ScavTrap " << getName() << " tries to attack " << target << ", but is too weak" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " brutally attacks " << target << ", causing " << getAD() << " points of damage!" << std::endl;
	_energyPts--;
}


/** Operator overloads */

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, ScavTrap const &d) {

	out << MAGENTA"   ScavTrap " << d.getName() << " stats"RST << std::endl;
	out << "--------------------" << std::endl;
	out << "Hit points:     " << d.getHP() << std::endl;
	out << "Energy points:  " << d.getEP() << std::endl;
	out << "Attack damage:  " << d.getAD() << std::endl;
	out << "--------------------";
	return (out);
}
