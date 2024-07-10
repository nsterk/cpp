/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 13:15:08 by nsterk        #+#    #+#                 */
/*   Updated: 2024/06/28 14:48:34 by nsterk        ########   odam.nl         */
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
	std::cout << CYAN << "int" << RST << std::endl;
	return true;
}

bool	ScalarConverter::isFloat(std::string value) {

	size_t periods = 0;
	size_t fchars = 0;
	size_t length = value.length();

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

	isPseudo(value);
	if (value.length() == 1 && !isdigit(value[0])) {
		std::cout << CYAN << "char" << RST << std::endl;
		char c = toChar(value);
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		printFloat(static_cast<float>(c), 1);
		printDouble(static_cast<double>(c), 1);
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
		printFloat(f, getPrecision(std::to_string(f)));
		toDouble(f);
	}
	else if (isDouble(value)) {
		double d = toDouble(value);
		toChar(d);
		toInt(d);
		toFloat(d);
		printDouble(d, getPrecision(std::to_string(d)));
	}
}

/** ORIGINAL VALUE IS CHAR */

char	ScalarConverter::toChar(std::string value) {
	char c = static_cast<char>(value[0]);
	printChar(c);
	return c;
}

/** ORIGINAL VALUE IS INTEGER */

int		ScalarConverter::toInt(std::string value) {
	
	try {
		return (std::stoi(value));
	} catch (std::exception &e) {
		std::cout << "String represents out of bounds integer, initial conversion is impossible" << std::endl;
		exit(0);
	}
}

void	ScalarConverter::toChar(int value) {
	
	char c = static_cast<char>(value);
	printChar(c);
}

void	ScalarConverter::toFloat(int value) {

	float converted = static_cast<float>(value);
	printFloat(converted, getPrecision(std::to_string(converted)));
}

void		ScalarConverter::toDouble(int value) {
	
	double converted = static_cast<double>(value);
	printDouble(converted, getPrecision(std::to_string(converted)));
}

/** ORIGINAL VALUE IS FLOAT */

float	ScalarConverter::toFloat(std::string value) {
	
	std::string blah = value;
	blah.pop_back();
	float converted = std::stof(blah);
	return (converted);
}

void	ScalarConverter::toChar(float value) {

	if (value < 0)
		std::cout << "char: underflow" << std::endl;
	else if (value > 127)
		std::cout << "char: overflow" << std::endl;
	else if (floor(value) < value)
		std::cout << "char: impossible without transforming original value" << std::endl;
	else
		printChar(static_cast<char>(value));
}

void	ScalarConverter::toInt(float value) {
	
	if (value > INT_MAX || value < INT_MIN)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void	ScalarConverter::toDouble(float value) {

	double converted = static_cast<double>(value);
	printDouble(converted, getPrecision(std::to_string(converted)));
}

/** ORIGINAL VALUE IS DOUBLE */

double		ScalarConverter::toDouble(std::string value) {

	return (std::stod(value));
}

void		ScalarConverter::toChar(double value) {
	
	if (floor(value) < value)
		std::cout << "char: impossible to convert without transforming original value" << std::endl;
	else
		printChar(static_cast<char>(value));
}

void	ScalarConverter::toInt(double value) {

	if (value > INT_MAX || value < INT_MIN)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void	ScalarConverter::toFloat(double value) {
	try {
		float converted = static_cast<float>(value);
		printFloat(converted, getPrecision(std::to_string(converted)));
	} catch (std::exception &e) {
		std::cout << "float: out of range" << std::endl;
	}
}

void	ScalarConverter::printChar(char c) {

	if (!isascii(c))
		std::cout << "char: impossible, value is not within ASCII limits" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << c << "\'" << std::endl;
}

void	ScalarConverter::printFloat(float f, int precision) {

	std::cout.setf(std::ios::fixed);
	std::cout.precision(precision);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void	ScalarConverter::printDouble(double d, int precision) {

	std::cout.setf(std::ios::fixed);
	std::cout.precision(precision);
	std::cout << "double: " << d << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

int		ScalarConverter::getPrecision(std::string convertedValue) {

	size_t length = convertedValue.length();
	size_t start = convertedValue.find_first_of('.') + 1;
	size_t lastNonZero = 0;

	for (size_t i = start; i < length; i++) {
		if (convertedValue[i] != '0' && isdigit(convertedValue[i]))
			lastNonZero = i;
	}
	return (!lastNonZero ? 1 : lastNonZero - start + 1);
}

void	ScalarConverter::isPseudo(std::string value) {
	//float pseudo literals
	if (!value.compare("-inff")) {
		std::cout << CYAN << "-inff float pseudo literal"<< RST << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		exit(0);
	}
	else if (!value.compare("+inff")) {
		std::cout << CYAN << "+inff float pseudo literal"<< RST << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		exit(0);
	}
	else if (!value.compare("nanf")) {
		std::cout << CYAN << "nanf float pseudo literal"<< RST << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		exit(0);
	}
	//double pseudo literals
	else if (!value.compare("-inf")) {
		std::cout << CYAN << "-inf double pseudo literal"<< RST << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		exit(0);
	}
	else if (!value.compare("+inf")) {
		std::cout << CYAN << "+inf double pseudo literal"<< RST << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		exit(0);
	}
	else if (!value.compare("nan")) {
		std::cout << CYAN << "nan double pseudo literal"<< RST << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		exit(0);
	}
}
/*
uitzonderingen:
	nan;
		char: impossible	int: impossible		float: nanf		double: nan
*/