/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 13:15:08 by nsterk        #+#    #+#                 */
/*   Updated: 2024/06/17 13:46:00 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

void	ScalarConverter::convert(std::string value) {

//if char
	if (value.length() == 1 && !isdigit(value[0])) {
		char c = toChar(value);
		toInt(c);
		toFloat(c);
		toDouble(c);
	}
	
}

char		ScalarConverter::toChar(std::string value) {

	char c = static_cast<char>(value[0]);
	if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << c << "\'" << std::endl;
	return c;
}

void		ScalarConverter::toChar(int value) {
	std::cout << value;

}	

void		ScalarConverter::toChar(float value) {
	std::cout << value;

}	

void		ScalarConverter::toChar(double value) {
	std::cout << value;

}	

int			ScalarConverter::toInt(std::string value) {
	std::cout << value;

	return (1);

}

void			ScalarConverter::toInt(char value) {

	int converted = static_cast<int>(value);
	std::cout << "int: " << converted << std::endl;

}

void		ScalarConverter::toFloat(char value) {
	float converted = static_cast<float>(value);
	std::cout << "float: " << converted << ".0f" << std::endl;
}

float		ScalarConverter::toFloat(std::string value) {
	std::cout << value;

	return (1.0f);
}

double		ScalarConverter::toDouble(std::string value) {
	std::cout << value;
	return (1.0);
}

void		ScalarConverter::toDouble(char value) {
	double converted = static_cast<double>(value);
	std::cout << "double: " << converted << ".0" << std::endl;
	
}
/*
char:
	len == 1 en geen digits

int:
	alleen digit

float:
	punt EN 1 f aan het eind
	OF
	-inff, +inff, nanf

double:
	punt EN GEEN f aan het eind
	OF
	-inf, +inf, nan

uitzonderingen:
	nan;
		char: impossible	int: impossible		float: nanf		double: nan
*/