/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 15:31:17 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/21 17:59:59 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <iostream>

// HumanA::HumanB(void) {

// 	std::cout << "Default HumanA constructor called" << std::endl;
// }

HumanB::~HumanB(void) {

	// std::cout << "Default HumanA constructor called for " << _name << std::endl;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {

	// std::cout << "HumanA constructor called for " << _name << std::endl;
}

void	HumanB::attack(void) {

	if (_weapon)
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " tries to attack, but is unarmed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {

	// std::cout << "weapon address in setweapon scope: " << &weapon << std::endl;
	_weapon = &weapon;
}