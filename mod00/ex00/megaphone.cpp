/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 16:10:01 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/02 15:38:36 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
			argv[i][j] = static_cast<char> (std::toupper(argv[i][j]));
		std::cout << argv[i]; 
	}
	std::cout << std::endl;
	return (0);
}
