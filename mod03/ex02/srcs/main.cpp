/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 14:46:44 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "colours.hpp"

int	main(void) {

	FragTrap	Momo("Momo");

	Momo.attack("Naomi");
	Momo.beRepaired(30);
	Momo.takeDamage(100);
	Momo.highFivesGuys();
	
	std::cout << B_TURQ"* Copy constructing *"RST << std::endl;
	{	
		FragTrap	Owow(Momo);
		std::cout << Owow.getName() << "'s EP: " << Owow.getEP() << std::endl;
	}
	return (0);
}