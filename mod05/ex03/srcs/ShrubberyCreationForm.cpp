/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 14:15:17 by nsterk        #+#    #+#                 */
/*   Updated: 2023/09/05 13:07:09 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(getName(), 145, 137) {
	
	setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

std::string	ShrubberyCreationForm::getName(void) const {

	return ("Shrubbery Creation Form");
}

void	ShrubberyCreationForm::action(void) const {

	std::ofstream	ofs;
	std::string	outfile = getTarget() + "_shrubbery";

	ofs.open(outfile.c_str(), std::ifstream::out);
	if (ofs.is_open() == false)
	{
		std::cout << "Error opening outfile" << std::endl;
		exit(1);
	}
	ofs << "ASCII trees";
	ofs.close();
}
