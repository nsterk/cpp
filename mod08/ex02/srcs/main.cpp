#include <stack>
#include <list>
#include <iostream>

#include "MutantStack.hpp"

int main(void) {
	// SUBJECT EXAMPLE
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << "mstack.top() ->	" << mstack.top() << std::endl;
		
		mstack.pop();

		std::cout << "mstack.size() ->	" << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}

	}
	// MORE TESTS
	{
		MutantStack<std::string> ms;
	
		ms.push("yooooooo");
		ms.push("i'll tell you what i want");
		ms.push("what i really really want");
		ms.push("SO");
		ms.push("tell me what you want");
		ms.push("what you really really want");

		for (MutantStack<std::string>::reverse_iterator ite = ms.rbegin(); ite != ms.rend(); ite++)
			std::cout << *ite << std::endl;

	}
	return (0);
}