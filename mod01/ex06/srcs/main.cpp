/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 16:53:33 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/22 21:39:02 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>

int	main(void)
{
	Harl	Karen;

	std::cout << "\033[0;35mKaren.complain(\"DEBUG\")\033[0m" << std::endl;
	Karen.complain("DEBUG");
	std::cout << "\033[0;35mKaren.complain(\"INFO\")\033[0m" << std::endl;
	Karen.complain("INFO");
	std::cout << "\033[0;35mKaren.complain(\"WARNING\")\033[0m" << std::endl;
	Karen.complain("WARNING");
	std::cout << "\033[0;35mKaren.complain(\"ERROR\")\033[0m" << std::endl;
	Karen.complain("ERROR");
	std::cout << "\033[0;35mKaren.complain(\"DEBOO\")\033[0m" << std::endl;
	Karen.complain("DEBOO");
	return (0);
}