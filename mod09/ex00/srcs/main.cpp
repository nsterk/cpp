#include "../inc/BitcoinExchange.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Error: Exactly one argument expected" << std::endl;
		return (0);
	}

	BitcoinExchange exchange(argv[1]);
	return (0);
}