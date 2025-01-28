#include "PmergeMe.hpp"

  template <typename C>
void	printList(C numbers) {
	std::for_each(numbers.begin(), numbers.end(), [](int i){ std::cout << i << " "; });
	std::cout << std::endl;
};

  template <STL class T>
class PmergeMe<T>::InvalidException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Invalid input - only positive integers are accepted");
		}
};

  template <STL class T>
class PmergeMe<T>::DuplicateException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Invalid input - no duplicates accepted");
		}
};

  template <STL class T>
PmergeMe<T>::PmergeMe(std::string input) :_oddOneOut(-1) {
	
	std::chrono::time_point<std::chrono::high_resolution_clock> begin = std::chrono::high_resolution_clock::now();
	std::chrono::time_point<std::chrono::high_resolution_clock> end;

	_fillInput(input);
	_splitInput();
	// als lijst al gesorteerd is hoeft het niet gesorteerd te worden
	if (std::is_sorted(_input.begin(), _input.end()))
		_sorted = _input;
	else {
		_sortFirst();
		_insertSecond();
		if (_oddOneOut != -1)
			_sorted.insert(std::upper_bound(_sorted.begin(), _sorted.end(), _oddOneOut), _oddOneOut);
	}
	end = std::chrono::high_resolution_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
};

  template <STL class T>
void	PmergeMe<T>::_fillInput(const std::string& input) {
	std::istringstream	istream(input);
	std::string			numString;
	long				number;

	while (istream >> numString) {
		try {
			number = std::stol(numString);
		} catch (std::exception &e) {
			throw InvalidException();
		}
		if (std::any_of(_input.begin(), _input.end(), [number](int i) {
			return (i == number);
		}))
			throw DuplicateException();
		if (number > std::numeric_limits<int>::max() || number < 0)
			throw InvalidException();
		_input.push_back(number);
	}
}

  template <STL class T>
void	PmergeMe<T>::_sortFirst(void) {

	_mergeSort(_pairs.begin(), _pairs.end());
	std::for_each(_pairs.begin(), _pairs.end(), [this](std::pair<int, int> pair){
		_sorted.push_back(pair.first);
		_unsorted.push_back(pair.second);
	});
};

  template <STL class T>
void	PmergeMe<T>::_insertSecond(void) {

	std::vector<size_t> jacobsthalNrs;
	_fillJacobsthal(jacobsthalNrs);

	auto it = _pairs.begin();
	_sorted.insert(_sorted.begin(), (*it).second);
	for (size_t jsIndex = 1; jsIndex < jacobsthalNrs.size(); jsIndex++) {
		size_t currentJs = jacobsthalNrs[jsIndex];
		size_t to_advance = currentJs - jacobsthalNrs[jsIndex - 1];
		std::advance(it, to_advance);
		while (currentJs > jacobsthalNrs[jsIndex-1]) {
			auto partner = std::find(_sorted.begin(), _sorted.end(), (*it).first);
			_sorted.insert(std::upper_bound(_sorted.begin(), partner, (*it).second), (*it).second);
			currentJs--;
			it--;
		}
		std::advance(it, to_advance);
	}
};

  template <STL class T>
void	PmergeMe<T>::_fillJacobsthal(std::vector<size_t> &jacobsthalNrs) {

	size_t number = 3;
	size_t iteration = 1;

	jacobsthalNrs.push_back(1);
	while (number < _pairs.size()) {
		jacobsthalNrs.push_back(number);
		number = jacobsthalNrs[iteration] + (2 * jacobsthalNrs[iteration - 1]);
		iteration++;
	};
	jacobsthalNrs.push_back(_pairs.size());
}

  template <STL class T>
void	PmergeMe<T>::_splitInput(void) {

	auto end = _input.end();
	auto begin = _input.begin();
	size_t partition = _input.size() / 2;
	end--;
	for (size_t i = 0; i < partition; i++) {
		if (*end > *begin)
			_pairs.push_back(std::make_pair(*end, *begin));
		else
			_pairs.push_back(std::make_pair(*begin, *end));
		end--;
		begin++;
	}
	if (_input.size() % 2)
		_oddOneOut = *begin;
};

struct	compareObj {
	bool operator()(std::pair<int, int> A, std::pair<int, int> B) {
		return (A.first < B.first);
	};
};

  template <STL class T>
  template <typename C>
void	PmergeMe<T>::_mergeSort(C begin, C end) {
	auto size = std::distance(begin, end);
	if (size == 1)
		return ;
	if (size == 2) {
		auto last = end;
		last--;
		if ((*begin).first > (*last).first)
			std::iter_swap(begin, last);
		return ;
	}
	auto middle = size / 2;
	C partition = begin;
	std::advance(partition, middle);
	_mergeSort(begin, partition);
	_mergeSort(partition, end);
	compareObj compare;

	std::inplace_merge(begin, partition, end, compare);
};

  template <STL class T>
PmergeMe<T>::~PmergeMe(void) {
	// std::cout << "PmergeMe destructor called" << std::endl;
}

  template <STL class T>
const T<int, std::allocator<int>>&	PmergeMe<T>::getContainer(void) {
	return (_sorted);
}
