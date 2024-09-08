#include "../inc/RPN.hpp"

#include <iostream>

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Exactly one argument expected" << std::endl;
	}

	RPN rpn(argv[1]);

	return (0);
}