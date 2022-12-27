/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:05:18 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 22:20:10 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>

Zombie::Zombie(void) {

	std::cout << "Zombie default constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void) {

	std::cout << "Zombie destructor called for " << _name << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	
	std::cout << "Zombie constructor called for " << _name << std::endl;
	return ;
}

void	Zombie::announce(void) {
	
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {

	this->_name = name;
}
