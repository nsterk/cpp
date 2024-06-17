#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Please provide exactly one argument to convert" << std::endl;
		return(0);
	}
	ScalarConverter::convert(argv[1]);
	// std::cout << "hi" << std::endl;
}