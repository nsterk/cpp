#include "RPN.hpp"
#include "colours.hpp"

#include <cstring>
#include <iostream>
#include <sstream>


class RPN::RPNException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("invalid input");
		}
};

std::unordered_map<char, std::function<int(int, int)>> RPN::_operators = {

	{'+', [](int num1, int num2) -> int { return num1 + num2; }},
	{'-', [](int num1, int num2) -> int { return num1 - num2; }},
	{'*', [](int num1, int num2) -> int { return num1 * num2; }},
	{'/', [](int num1, int num2) -> int { return num1 / num2; }},

};

RPN::RPN(std::string input) {
	_validateInput(input);
	_run(input);
}

void	RPN::_validateInput(const std::string &input) {
	size_t numbers = 0;
	size_t operators = 0;
	size_t len = input.size();

	if (input.find_first_not_of(" 123456789+-*/") != std::string::npos)
		throw RPNException();
	for (size_t i = 0; i < len; i++) {
		// no digits larger than 9
		if (input[i] == ' ')
			continue;
		if (input[i + 1] != ' ' && input[i + 1] != '\0')
			throw RPNException();
		if (std::strchr("+-*/", input[i]) != nullptr)
			operators++;
		else
			numbers++;
	}

	if (numbers != (operators + 1))
		throw RPNException();
}

int		stupidPop(std::stack<int> &stack) {
	int i = stack.top();
	stack.pop();
	return (i);
}

void	RPN::_run(const std::string &input) {
	std::istringstream istream(input);
	char c;

	while (istream >> c) {
		// std::cout << GRN << "Current element: " << c << RST << std::endl;
		if (c >= '1' && c <= '9') {
			(*this).push(c - 48);
			continue ;
		}
		if ((*this).size() < 2) // cause then we don't have enough numbers in the stack to perform operation
			throw RPNException();

		// std::cout << "Top of stack before operation: " << (*this).top() << std::endl;
		int num2 = stupidPop((*this));
		// std::cout << "num2: " << num2 << std::endl;
		int num1 = stupidPop((*this));
		// std::cout << "num1: " << num1 << std::endl;
		(*this).push(_operators[c](num1, num2));

		// std::cout << "Top of stack after operation: " << (*this).top() << std::endl;
	}
	std::cout << (*this).top() << std::endl;
}

RPN::~RPN(void) {

}
