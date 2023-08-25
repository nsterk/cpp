/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 17:10:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	beast("Momo");

	beast.attack("Naomi");
	beast.takeDamage(5);
	beast.beRepaired(4);
	std::cout << beast << std::endl;

	{
		ClapTrap	copy(beast);
		std::cout << copy << std::endl;
	}
	return (0);
}