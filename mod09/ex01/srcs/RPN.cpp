#include "RPN.hpp"
#include "colours.hpp"

#include <cstring>
#include <cctype>
#include <iostream>
#include <sstream>


class RPN::RPNException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Error");
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

	if (input.find_first_not_of(" 0123456789+-*/") != std::string::npos)
		throw RPNException();
	for (size_t i = 0; i < len; i++) {
		// no numbers larger than 9
		if (input[i] == ' ')
			continue;
		if (isdigit(input[i]) && isdigit(input[i + 1]))
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
		if (isdigit(c)) {
			(*this).push(c - 48);
			continue ;
		}
		if ((*this).size() < 2) // cause then we don't have enough numbers in the stack to perform operation
			throw RPNException();

		int num2 = stupidPop((*this));
		int num1 = stupidPop((*this));
		(*this).push(_operators[c](num1, num2));
	}
	std::cout << (*this).top() << std::endl;
}

RPN::~RPN(void) {

}
