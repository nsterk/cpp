#include "../inc/RPN.hpp"

#include <iostream>

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Exactly one argument expected" << std::endl;
	}

	try {

		RPN rpn(argv[1]);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}