#include "../inc/BitcoinExchange.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Exactly one argument expected" << std::endl;
	}

	BitcoinExchange exchange(argv[1]);
	return (0);
}