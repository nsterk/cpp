/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 17:54:37 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int	main(void)
{
	Zombie Momo = Zombie("Momo");
	Zombie *horde;

	Momo.announce();
	horde = zombieHorde(3, "Momo the seconds");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
