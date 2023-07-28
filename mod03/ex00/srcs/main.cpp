/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/25 17:31:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void	announceRound(unsigned int nr, ClapTrap &obj) {

	std::cout << "\n" << BACK_WHT"Round " << nr << "... FIGHT!"RST"  ";
	std::cout << U_WHT"HP " << obj.getHP() << " EP " << obj.getEP() << " AD " << obj.getAD() << RST << std::endl;
}

int	main(void) {

	ClapTrap	beast("Momo");

	announceRound(1, beast);
	beast.attack("Naomi");
	announceRound(2, beast);
	beast.takeDamage(5);
	announceRound(3, beast);
	beast.beRepaired(5);
	announceRound(4, beast);
	return (0);
}