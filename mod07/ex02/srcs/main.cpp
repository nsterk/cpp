#include <iostream>
#include <vector>
#include <string>
#include "../inc/Array.hpp"
#include "../inc/colours.hpp"

template<typename T>
void	printArray(T array, unsigned int len) {
	for (size_t i = 0; i < len; i++) {
		if (i)
			std::cout << "	";
		// std::cout << LILA << "[" << i << "]: " << RST << array[i];
		std::cout << "[" << i << "]: " << array[i];
	}
	std::cout << std::endl;
}

int main(void) {

	{
		std::cout << "----- Constructing int array with parameter -----" << std::endl;
		Array<int> numbers = Array<int>(3);
		std::cout << "Printing array:	";
		printArray(numbers, numbers.size());
		std::cout << "\n----- Exception handling and subscript operator -----" << std::endl;
		for (int i = -1; i < 3; i++) {
			std::cout << "Trying to access numbers[" << i << "]:	";
			try {
				std::cout << numbers[i] << std::endl;
			} catch (std::exception &e) {
				std::cerr << e.what() << std::endl;
			}
	}
	}
	{
		std::cout << "\n----- Construction without parameter, char array -----" << std::endl;
		Array<char> chars = Array<char>();
		std::cout << "... Printing chars	" << std::endl;
		printArray(chars, chars.size());
		std::cout <<  "... Making second char array where memory will be allocated" << std::endl;
		Array<char> chars2 = Array<char>(3);
		printArray(chars2, chars2.size());
		std::cout << "\n... chars2[0] = \'a\'\n... Printing chars2" << std::endl;
		chars2[0] = 'a';
		printArray(chars2, chars2.size());
		std::cout << "\n----- Assignment operator, chars = chars2 -----" << std::endl;
		chars = chars2;
		std::cout << "chars: ";
		printArray(chars, chars.size());
		std::cout << "chars2: ";
		printArray(chars2, chars2.size());
	}
	// Array<std::string> strings = Array<std::string>(2);
	// printArray(strings, strings.size());
	return (0);
}
