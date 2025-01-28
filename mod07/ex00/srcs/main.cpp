#include <iostream>
#include <string>
#include "colours.hpp"
#include "whatever.hpp"

int	main(void) {
	int	a = 2;
	int b = 3;

	std::cout << "--- Integers a: " << a << ", b: " << b << " ---" << std::endl;
	std::cout << "swap(a, b)	";
	whatever::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "min(a, b)	" << whatever::min(a, b) << std::endl;
	std::cout << "max(a, b)	" << whatever::max(a, b) << std::endl;


	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "\n---std::string " << CYAN << "c " << c << MAGENTA << "	d " << d << RST << "---" << std::endl;

	std::cout << "min(c, d)	" << whatever::min(c, d) << std::endl;
	std::cout << "max(c, d)	" << whatever::max(c, d) << std::endl;

	return (0);
}
