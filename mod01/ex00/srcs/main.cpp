/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/07 19:11:35 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *newZombie (std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie Momo = Zombie("Momo");
	Zombie *Owow = newZombie("Owow");

	randomChump("random dude");
	Momo.announce();
	delete Owow;
	return (0);
}