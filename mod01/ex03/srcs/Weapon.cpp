/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/19 22:29:30 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/19 22:33:16 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

const std::string	&Weapon::getType(void) {

	return (this->_type);
}

void	Weapon::setType(const std::string type) {

	this->_type = type;
}
