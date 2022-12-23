/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 15:21:32 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>

#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

Zombie *newZombie (std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << MAGENTA << "Instantiate zombie with name \"Stack zombie\"" << RESET << std::endl;
	Zombie A = Zombie("Stack zombie");

	std::cout << CYAN << "Allocate, announce, and delete zombie with name \"Heap zombie\"" << RESET << std::endl;
	Zombie *B = newZombie("Heap zombie");

	B->announce();
	delete B;
	std::cout << GREEN << "Calling randomChump with name \"random dude\"" << RESET << std::endl;
	randomChump("random dude");
	std::cout << MAGENTA << "Calling announce for Stack zombie" << RESET << std::endl;
	A.announce();
	return (0);
}