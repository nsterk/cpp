/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 19:10:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/07 21:04:20 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b("bureaucrat");
	Bureaucrat c(b);
	
	try {
		if (1 > 0)
			throw 4;
	}
	catch (int i)
	{
		std::cout << i << std::endl;
	}
	return (0);
}