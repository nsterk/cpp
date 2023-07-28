/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/25 17:42:50 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void	announceRound(unsigned int nr, ScavTrap &obj) {

	std::cout << "\n" << BACK_WHT"Round " << nr << "... FIGHT!"RST"  ";
	std::cout << U_WHT"HP " << obj.getHP() << " EP " << obj.getEP() << " AD " << obj.getAD() << RST << std::endl;
}

int	main(void) {

	ScavTrap	Momo("Motherfudging Momo");
	announceRound(1, Momo);
	Momo.attack("Naomi");
	Momo.beRepaired(30);
	Momo.takeDamage(100);
	Momo.guardGate();
	return (0);
}