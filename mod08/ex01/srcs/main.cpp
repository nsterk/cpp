#include "Span.hpp"
#include "colours.hpp"


int	main(void) {

	// SUBJECT EXAMPLE
	{
		std::cout << GRN << "Subject example" << RST << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printNumbers();
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	// ADDING RANGE OF NUMBERS + THROW SPAN FULL EXCEPTION
	{
		std::cout << GRN << "Adding range of numbers to span + exception handling" << RST << std::endl;
		Span sp = Span(5); // constructing span with max 5 elements
		std::vector<int> v = {1, 10, -91};

		sp.addNumbers(v.begin(), v.end()); // adding range of numbers to the span
		sp.printNumbers();
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		
		std::vector<int> v2 = {-92, 3}; // add 2 numbers to the span, thereby filling it to the maxxxxxxx
		sp.addNumbers(v2.begin(), v2.end());
		sp.printNumbers();
		std::cout << "Updated longest span: " << sp.longestSpan() << std::endl;

		try {
			std::vector<int> v3 = {1};
			sp.addNumbers(v3.begin(), v3.end());
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	// GETTING SPAN EDGE CASES
	{
		std::cout << L_GRN << "Calling shortestSpan on span of size 0" << RST << std::endl;
		Span sp = Span(5);
		try {
			sp.shortestSpan();
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(38);
		std::cout << L_GRN << "Calling longestSpan on span of size 1" << RST << std::endl;
		try {
			sp.shortestSpan();
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(38);
		std::cout << sp.shortestSpan() << std::endl;
	}
	// LOTS OF NUMBERS
	{
		std::cout << L_GRN << "Testing with span of size 15000" << RST << std::endl; 
		Span sp = Span(15000);
		std::vector<int> v;

		for (int i = 0; i < 15000; i++)
			v.push_back(i);
		// v[9000] = 9001;
		sp.addNumbers(v.begin(), v.end());

		try {
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	
	return (0);
}