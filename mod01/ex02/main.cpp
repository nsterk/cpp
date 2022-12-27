/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/19 19:34:27 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 22:37:19 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << "Value of str: " << str << std::endl;
	std::cout << "Value that stringPTR points to: " << stringPTR << std::endl;
	std::cout << "Value that stringREF points to: " << stringREF << std::endl;
	return (0);
}
