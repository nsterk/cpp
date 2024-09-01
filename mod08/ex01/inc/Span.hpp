#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
	public:
		Span(unsigned int N);
		Span(Span const &obj);
		~Span();

		class	SpanFullException;
		class	SpanEmptyException;
	
		Span&	operator=(Span const &rhs);
		void	printNumbers(void);
		void	addNumber(int n);
	
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

	private:
		unsigned int		_N;
		std::vector<int>	_elements;
};

#endif