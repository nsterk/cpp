/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 18:08:25 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap	Momo("Momo");

	std::cout << Momo << std::endl;
	
	Momo.takeDamage(70);
	Momo.beRepaired(30);
	Momo.attack("Naomi");
	Momo.guardGate();

	{
		ScavTrap clone(Momo);
		std::cout << clone << std::endl;
	}
	return (0);
}