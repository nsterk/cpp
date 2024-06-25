/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 13:15:08 by nsterk        #+#    #+#                 */
/*   Updated: 2024/06/25 13:33:39 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cfloat>
#include <limits>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

bool		ScalarConverter::isInt(std::string value) {

	if (!isdigit(value[0]) && value[0] != '-' && value[0] != '+')
		return false;
	for (size_t i = 1; i < value.length(); i++) {
		if (!isdigit(value[i]))
			return false;
	}
	// try {
	// 	std::stoi(value);
	// } catch (std::exception &e) {
	// 	// std::cout << e.what() << std::endl;
	// 	return false;
	// }
	std::cout << CYAN << "int" << RST << std::endl;
	return true;
}

bool	ScalarConverter::isFloat(std::string value) {

	size_t periods = 0;
	size_t fchars = 0;
	size_t length = value.length();

	// if (length < 4)
	// 	return false;
	if (value[length - 1] != 'f')
		return false;
	if (value[0] != '+' && value[0] != '-' && !isdigit(value[0]))
		return false;
	for (size_t i = 1; i < length; i++) {
		if (value[i] == '.') {
			periods++;
			if (!isdigit(value[i + 1])){
				std::cout << "Error: invalid input" << std::endl;
				exit(0);
			}
		}
		else if (value[i] == 'f')
			fchars++;
		else if (i != length && !isdigit(value[i]) && value[i] != 'f') {
			return false; //this belongs with exception handling
		}
	}
	if (periods != 1 || fchars > 1) {
		std::cout << "Error: invalid input" << std::endl;
		exit(0);
	}
	std::cout << CYAN << "float" << RST << std::endl;
	return true;
}

bool	ScalarConverter::isDouble(std::string value) {

	size_t periods = 0;
	size_t length = value.length();

	if (length < 3)
		return false;
	for (size_t i = 0; i < length; i++) {
		if (i == 0 && value[i] != '-' && value[i] != '+' && !isdigit(value[0]))
			return false;
		if (value[i] == '.') {
			if (periods != 0)
				return false;
			periods++;
		}
		else if (i && !isdigit(value[i]))
			return false;
	}
	if (periods != 1)
		return false;
	std::cout << CYAN << "double" << RST << std::endl;
	return (true);
}

void	ScalarConverter::convert(std::string value) {

	if (value.length() == 1 && !isdigit(value[0])) {
		std::cout << CYAN << "char" << RST << std::endl;
		char c = toChar(value);
		toInt(c);
		toFloat(c);
		toDouble(c);
	}
	else if (isInt(value)) {
		int i = toInt(value);
		toChar(i);
		std::cout << "int: " << i << std::endl;
		toFloat(i);
		toDouble(i);
	}
	else if (isFloat(value)) {
		float f = toFloat(value);
		toChar(f);
		toInt(f);
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "float: " << f << "f" << std::endl;
		std::cout.unsetf(std::ios::fixed);
		toDouble(f);
	}
	else if (isDouble(value)) {
		double d = toDouble(value);
		toChar(d);
		toInt(d);
		toFloat(d);
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "double: " << d << std::endl;
		std::cout.unsetf(std::ios::fixed);

	}
	
}

/** ORIGINAL VALUE IS CHAR */

char	ScalarConverter::toChar(std::string value) {
	char c = static_cast<char>(value[0]);
	printChar(c);
	return c;
}

void	ScalarConverter::toInt(char value) {
	int converted = static_cast<int>(value);
	std::cout << "int: " << converted << std::endl;

}

void	ScalarConverter::toFloat(char value) {
	float converted = static_cast<float>(value);
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << "float: " << converted << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void	ScalarConverter::toDouble(char value) {
	double converted = static_cast<double>(value);
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << "double: " << converted << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

/** ORIGINAL VALUE IS INTEGER */

int		ScalarConverter::toInt(std::string value) {
	try {
		int converted = std::stoi(value);
		return (converted);
	} catch (std::exception &e) {
		std::cout << "String represents out of bounds integer, initial conversion is impossible" << std::endl;
		exit(0);
	}
	// return (converted);
}

void	ScalarConverter::toChar(int value) {
	char c = static_cast<char>(value);
	printChar(c);
}

void	ScalarConverter::toFloat(int value) {

	float maxValue = std::numeric_limits<float>::max();
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	if (value > maxValue)
		std::cout << "float: out of range" << std::endl;
	try {
		float converted = static_cast<float>(value);
		std::cout << "float: " << converted << "f" << std::endl;

	} catch (std::exception &e) {
		std::cout << "float: out of range" << std::endl;
	}
	std::cout.unsetf(std::ios::fixed);
	//blabla error handling overflow yadayada
}

void		ScalarConverter::toDouble(int value) {
	double daMax = std::numeric_limits<double>::max();
	if (value > daMax) {
		std::cout << "double: overflow" << std::endl;
		return ;
	}
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	double converted = static_cast<double>(value);
	std::cout << "double: " << converted << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

/** ORIGINAL VALUE IS FLOAT */

float	ScalarConverter::toFloat(std::string value) {
	
	float converted = std::stof(value);
	return (converted);
}

void	ScalarConverter::toChar(float value) {

	if (floor(value) < value) {
		std::cout << "char: impossible without transforming original value" << std::endl;
		return ;
	}
	char converted = static_cast<char>(value);
	printChar(converted);

}

void	ScalarConverter::toInt(float value) {
	
	int converted = static_cast<int>(value);
	std::cout << "int: " << converted << std::endl;
}

void	ScalarConverter::toDouble(float value) {
	double converted = static_cast<double>(value);
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << "double: " << converted << std::endl;
	std::cout.unsetf(std::ios::fixed);

}

/** ORIGINAL VALUE IS DOUBLE */

double		ScalarConverter::toDouble(std::string value) {
	double converted = std::stod(value);
	return (converted);
}

void		ScalarConverter::toChar(double value) {
	
	if (floor(value) < value) {
		std::cout << "char: impossible to convert without transforming original value" << std::endl;
		return ;
	}
	
	char c = static_cast<char>(value);
	printChar(c);
}

void	ScalarConverter::toInt(double value) {
	int converted = static_cast<int>(value);
	std::cout << "int: " << converted << std::endl;
}

void	ScalarConverter::toFloat(double value) {
	float converted = static_cast<float>(value);
	printFloat(converted);
	// std::cout.setf(std::ios::fixed);
	// std::cout.precision(1);
	// std::cout << "float: " << converted << std::endl;
	// std::cout.unsetf(std::ios::fixed);
}

void	ScalarConverter::printChar(char c) {
	if (!isascii(c))
		std::cout << "char: impossible, value is not within ASCII limits" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << c << "\'" << std::endl;
}

void	ScalarConverter::printFloat(float f) {
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout.unsetf(std::ios::fixed);
}
/*
uitzonderingen:
	nan;
		char: impossible	int: impossible		float: nanf		double: nan
*/