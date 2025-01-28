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
	return (0);
}


/*
#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/