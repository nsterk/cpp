#include "RPN.hpp"
#include <iostream>

/*

\*/
std::unordered_map<char, std::function<int(int, int)>> RPN::_operators = {

	{'+', [](int num1, int num2) -> int { return num1 + num2; }},
	{'-', [](int num1, int num2) -> int { return num1 - num2; }},
	{'*', [](int num1, int num2) -> int { return num1 * num2; }},
	{'/', [](int num1, int num2) -> int { return num1 / num2; }},

};

RPN::RPN(std::string input) {

	for (size_t i = 0; i != input.size(); i++)
		std::cout << input[i] << std::endl;
	
	try {

		std::cout << _operators['+'](10, 2) << std::endl;
		std::cout << _operators['-'](10, 2) << std::endl;
		std::cout << _operators['*'](10, 2) << std::endl;
		std::cout << _operators['/'](10, 2) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

RPN::~RPN(void) {


}
