/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/01 17:37:27 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void	announceRound(unsigned int nr, ScavTrap &obj) {

	std::cout << "\n" << BACK_GRN"Round " << nr << "... FIGHT!"RST"  ";
	std::cout << GRN"HP " << obj.getHP() << " EP " << obj.getEP() << " AD " << obj.getAD() << RST << std::endl;
}

int	main(void) {

	ScavTrap	Momo("Motherfudging Momo");
	announceRound(1, Momo);
	Momo.takeDamage(70);
	announceRound(2, Momo);
	Momo.beRepaired(30);
	announceRound(3, Momo);
	Momo.attack("Naomi");
	announceRound(4, Momo);
	Momo.guardGate();
	return (0);
}