/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 18:39:27 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <colours.hpp>
#include <iostream>

int	main(void)
{
	std::cout << GREEN << "Instantiating and announcing a singular Momo" << RESET << std::endl;

	Zombie Momo = Zombie("Momo");
	Momo.announce();

	std::cout << BLUE << "Allocating a horde of Momos" << RESET << std::endl;
	Zombie *horde = zombieHorde(3, "Momo the seconds");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
