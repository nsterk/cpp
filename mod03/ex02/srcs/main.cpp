/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 12:34:30 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/21 22:59:04 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	FragTrap	Momo("Motherfucking Momo");

	Momo.attack("Naomi");
	Momo.beRepaired(30);
	Momo.takeDamage(100);
	Momo.highFivesGuys();
	return (0);
}