/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 15:31:17 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 14:04:18 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <iostream>

// HumanA::HumanA(void) {

// 	std::cout << "Default HumanA constructor called" << std::endl;
// }

HumanA::~HumanA(void) {

	// std::cout << "Default HumanA constructor called for " << _name << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
 
	// std::cout << "HumanA constructor called for " << _name << std::endl;
}

void	HumanA::attack(void) {

	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}