/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:08:45 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/27 16:29:51 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <colours.hpp>
#include <iostream>

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
