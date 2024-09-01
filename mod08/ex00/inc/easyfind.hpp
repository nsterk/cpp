#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include "colours.hpp"

class NotFoundException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Element not found");
		}
};

	template<typename T>
typename T::iterator	easyfind(T& container, int arg2) {

	typename T::iterator first = std::find(container.begin(), container.end(), arg2);

	// if (first == container.end())
	// 	throw NotFoundException();
	
	return first;
};

#endif