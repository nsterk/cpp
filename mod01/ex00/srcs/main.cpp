/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 13:22:20 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>

Zombie *newZombie (std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << "\033[35mZombie A = Zombie(\"A\");\033[0m" << std::endl;	
	Zombie A = Zombie("A");
	std::cout << "\033[35mZombie *B = newZombie(\"B\");\033[0m" << std::endl;
	Zombie *B = newZombie("B");

	std::cout << "\033[35mrandomChump(\"random dude\");\033[0m" << std::endl;
	randomChump("random dude");
	std::cout << "\033[35mA.announce():\033[0m" << std::endl;
	A.announce();
	B->announce();
	delete B;
	return (0);
}