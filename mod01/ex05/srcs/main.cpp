/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/14 16:53:33 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/27 16:29:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int	main(void)
{
	Harl	Karen;

	std::cout << GREEN << "Karen.complain(\"DEBUG\")" << RESET << std::endl;
	Karen.complain("DEBUG");
	std::cout << GREEN << "Karen.complain(\"INFO\")" << RESET << std::endl;
	Karen.complain("INFO");
	std::cout << GREEN << "Karen.complain(\"WARNING\")" << RESET << std::endl;
	Karen.complain("WARNING");
	std::cout << GREEN << "Karen.complain(\"ERROR\")" << RESET << std::endl;
	Karen.complain("ERROR");
	std::cout << GREEN << "Karen.complain(\"DEBOO\")" << RESET << std::endl;
	Karen.complain("DEBOO");
	return (0);
}
