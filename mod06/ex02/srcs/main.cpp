#include <iostream>
#include <random>
#include "colours.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

A&	what(A& param) {
	return (param);
}

B&	what(B& param) {
	return (param);
}

C&	what(C& param) {
	return (param);
}

Base*	generate(void) {

	Base* ret;

	switch ((rand() % 3) + 1) {
		case 1: {
			std::cout << "Returning new " << CYAN << "A" << RST << std::endl;
			ret = new A;
			break ;
		}
		case 2: {
			std::cout << "Returning new " << MAGENTA << "B" << RST << std::endl;
			ret = new B;
			break ;
		}
		case 3: {
			std::cout << "Returning new " << GRN  "C" << RST << std::endl;
			ret = new C;
		}
	}
	return ret;
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << CYAN << "A" << RST << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << MAGENTA << "B" << RST << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << GRN << "C" << RST << std::endl;
}

void identify(Base& p) {
	try {
		A& ref = dynamic_cast<A&>(p);
		what(ref);
		std::cout << CYAN << "A" << RST << std::endl;
		return ;
	} catch (std::exception &e) {
	}
	try {
		B& ref = dynamic_cast<B&>(p);
		what(ref);
		std::cout << MAGENTA << "B" << RST << std::endl;
		return ;
	} catch (std::exception &e) {
	}
	try {
		C& ref = dynamic_cast<C&>(p);
		what(ref);
		std::cout << GRN << "C" << RST << std::endl;
		return ;
	} catch (std::exception &e) {
	}

}

int	main(void) {
	for (size_t i = 0; i < 10; i++) {

		Base* test = generate();
		Base &ref = *test;
		identify(test);
		identify(ref);
		if (test)
			delete test;
	}
	return (0);
}