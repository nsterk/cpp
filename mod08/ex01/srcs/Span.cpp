#include <algorithm>

#include <iostream>
#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {
	// std::cout << "Span constructor for " << N << " elements called" << std::endl;
};

Span::Span(Span const &obj) {
	this->_N = obj._N;
	this->_elements = obj._elements;
}

Span::~Span(){};

class	Span::SpanFullException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Exception: Not enough space to add number(s) to span");
		}
};

class	Span::SpanEmptyException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Exception: Not enough numbers to calculate span");
		}
};

Span&	Span::operator=(Span const &rhs) {
	this->_N = rhs._N;
	this->_elements = rhs._elements;
	return (*this);
}

void	Span::printNumbers(void) {
	unsigned int size = _elements.size();

	if (!size)
		return ;
	if (size > 100) {
		std::cout << "The size of this span is over 100, why do you want to print it out in its entirety" << std::endl;
	}
	std::cout << "{";
	for (size_t i = 0; i < (size - 1); i++) {
		std::cout << _elements[i] << ", ";
	}
	std::cout << _elements[size - 1] << "} " << std::endl;
}

void	Span::addNumber(int n) {
	if (_elements.size() == _N)
		throw SpanFullException();
	
	_elements.push_back(n);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if ((_elements.size() + std::distance(begin, end)) > _N)
		throw SpanFullException();
	for (std::vector<int>::iterator it = begin; it < end; it++) {
		_elements.push_back(*it);
	}
}

int		Span::longestSpan(void) {
	if (_elements.size() < 2)
		throw SpanEmptyException();

	std::sort(_elements.begin(), _elements.end());

	return (_elements.back() - _elements.front());
}

int		Span::shortestSpan(void) {
	if (_elements.size() < 2)
		throw SpanEmptyException();

	std::sort(_elements.begin(), _elements.end());
	if (std::adjacent_find(_elements.begin(), _elements.end()) != _elements.end())
		return (0);
	
	int shortest = _elements[1] - _elements[0];

	for (size_t	i = 2; i < _elements.size(); i++)
		shortest = std::min(shortest, _elements[i] - _elements[i - 1]);

	return (shortest);
}
