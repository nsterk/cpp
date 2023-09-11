/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/07 19:10:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/11 15:36:44 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	intern;
	AForm	*form;

	form = intern.makeForm("presidential pardon", "DOEI");
	std::cout << *form << std::endl;
	delete form;

	form = intern.makeForm("robotomy request", "DOEI");
	std::cout << *form << std::endl;
	delete form;

	form = intern.makeForm("SHRUBBERY CREATION", "momo");
	std::cout << *form << std::endl;
	delete form;

	intern.makeForm("nope nope", "target");
	return (0);
}