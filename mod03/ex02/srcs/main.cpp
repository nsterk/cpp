/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/13 14:51:31 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	FragTrap	Momo("Motherfucking Momo");
	ScavTrap	Mordor("Saruman");

	Momo.attack("Naomi");
	Momo.beRepaired(30);
	Momo.takeDamage(100);
	Momo.highFivesGuys();
	
	FragTrap	Owow(Momo);
	std::cout << Owow.getAttackDmg() << std::endl;
	ScavTrap	Frodo(Mordor);
	std::cout << Frodo.getAttackDmg() << std::endl;
	std::cout << "Frodo's name: " << Frodo.getName() << std::endl;
	return (0);
}