#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include "colours.hpp"

#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <chrono>
#include <ratio>

// template for STL (standard template library) containers, my template will use this template
#define STL template<typename, typename>

  template <STL class T>
class PmergeMe {
	public:
		// typedef of a container for integers: std::list and std::vector have the same template parameters (element type and element allocator)
		typedef T<int, std::allocator<int>> intContainer;
		// typedef of a container for <int, int> pairs
		typedef T<std::pair<int, int>, std::allocator<std::pair<int, int>>> pairContainer;

		PmergeMe(std::string input);
		~PmergeMe(void);

		class InvalidException;
		class DuplicateException;

		const intContainer&	getContainer(void);
		std::chrono::microseconds	elapsed;

	private:
		void		_fillInput(const std::string &input);
		void		_splitInput(void);
		void		_sortFirst(void);
		  template <typename C>
		void		_mergeSort(C begin, C end);
		void		_insertSecond(void);
		void		_fillJacobsthal(std::vector<size_t> &jacobsthalNrs);
		
		intContainer	_input;
		intContainer	_sorted; // this will be merge sorted
		intContainer	_unsorted; // this will be insertion sorted into the _sorted container after merge sorting that one
		pairContainer	_pairs;
		int				_oddOneOut;
};

#include "../srcs/PmergeMe.tpp"

#endif
