#include <stack>
#include <iostream>

#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> ms;
	ms.push(1);
	ms.push(33);
	ms.push(35);
	for (MutantStack<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
		std::cout << *it << std::endl;

	ms.push(-123);

	for (MutantStack<int>::reverse_iterator it = ms.rbegin(); it != ms.rend(); it++)
		std::cout << *it << std::endl;
	
	MutantStack<int> const ms2 = ms;
	for (MutantStack<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
		std::cout << *it << std::endl;
	return (0);
}