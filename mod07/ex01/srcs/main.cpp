#include <iostream>
#include <cstring>
#include <vector>
#include "iter.hpp"

  template<typename T>
void	doPrint(T &arg) {
	std::cout << arg << std::endl;
}

void	toUpper(char &c) {
	if (c >= 'a' && c <= 'z')
		std::cout << "input \"" << c << "\" is a lowercase letter, that's AMAZING" << std::endl;
	else if (c >= 'A' && c <= 'Z')
		std::cout << "input \"" << c << "\" is an uppercase letter, that's AMAZING" << std::endl;
	else if (isprint(c))
		std::cout << "input \"" << c << "\" is not a letter but at least it's in the ascii table" << std::endl;
	else
		std::cout << "this is a shitty character" << std::endl;

}

int	main(void) {
	char momo[5] = "momo";
	double numbers[5] = {1, 2, 3, 4, 5};
	iter(momo, 4, doPrint<char>);
	iter(numbers, 5, doPrint<double>);
	char word[35] = "`§q2ad=AM#^";
	iter(word, strlen(word), toUpper);

}