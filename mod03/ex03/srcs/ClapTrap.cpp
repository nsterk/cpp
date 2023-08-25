/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 17:50:29 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 18:42:26 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPts(HP), _energyPts(EP), _attackDmg(AD) {

	std::cout << "A "L_GRN"ClapTrap"RST" spawned" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(HP), _energyPts(EP), _attackDmg(AD) {

	std::cout << "ClapTrap "L_GRN << name << RST" was born" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &original) {

	*this = original;
	setName(this->getName().append(" 2"));
	std::cout << "ClapTrap "L_GRN << this->getName() << RST" was "L_GRN"cloned "RST"from ClapTrap " << original.getName() << std::endl;
};

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap "PRETTY_RED << _name << RST" died" << std::endl;
};

/* Setter functions */

void	ClapTrap::setName(const std::string &name) {

	_name = name;
}

void	ClapTrap::setHP(unsigned int amount) {

	_hitPts = amount;
}

void	ClapTrap::setEP(unsigned int amount) {

	_energyPts = amount;
}

void	ClapTrap::setAD(unsigned int amount) {

	_attackDmg = amount;
}

/* Getter functions */

std::string	ClapTrap::getName(void) const {

	return (this->_name);
};

unsigned int	ClapTrap::getHP(void) const {

	return (this->_hitPts);
};

unsigned int	ClapTrap::getEP(void) const {

	return (this->_energyPts);
};

unsigned int	ClapTrap::getAD(void) const {

	return (this->_attackDmg);
};

void	ClapTrap::attack(const std::string& target) {
 
	if (!_energyPts || !_hitPts)
	{
		std::cout << "ClapTrap " << _name << " tries to attack " << target << ", but is too weak" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " brutally attacks " << target << ", causing " << _attackDmg << " points of damage!" << std::endl;
	this->_energyPts -= 1;
};

void	ClapTrap::takeDamage(unsigned int amount) {

	if (amount < this->_hitPts)
		this->_hitPts -= amount;
	else
		this->_hitPts = 0;
	std::cout << _name << " takes " << amount << " points of damage! OUCH!" << std::endl;
};

void	ClapTrap::beRepaired(unsigned int amount) {

	if (!_energyPts || !_hitPts)
	{
		std::cout << _name << " tries to repair itself, but is too weak" << std::endl;
		return ;
	}
	this->_hitPts += amount;
	this->_energyPts -= 1;
	std::cout << _name << " repairs itself! Bam! It has regained " << amount << " hit points!" << std::endl;
};

/** Operator overloads */

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs) {

	this->_name = rhs._name;
	this->_hitPts = rhs._hitPts;
	this->_energyPts = rhs._energyPts;
	this->_attackDmg = rhs._attackDmg;
	return (*this);
};

std::ostream&	operator<<(std::ostream& out, ClapTrap const &d) {

	out << MAGENTA"   ClapTrap " << d.getName() << RST << std::endl;
	out << "--------------------" << std::endl;
	out << "Hit points:     " << d.getHP() << std::endl;
	out << "Energy points:  " << d.getEP() << std::endl;
	out << "Attack damage:  " << d.getAD() << std::endl;
	out << "--------------------";
	return (out);
}
