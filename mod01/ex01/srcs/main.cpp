/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/19 19:18:23 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *zombieHorde (int N, std::string name);

int	main(void)
{
	Zombie Momo = Zombie("Momo");
	Zombie *horde;

	Momo.announce();
	horde = zombieHorde(3, "Momo the second");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
