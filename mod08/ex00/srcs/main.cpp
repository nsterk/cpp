#include <iostream>
#include <vector>
#include <deque>
#include <array>

#include "easyfind.hpp"
#include "colours.hpp"

  template <typename T>
void	printResult(T& container, typename T::iterator &iter) {
	if (iter == container.end())
		std::cout << "Element not found" << std::endl;
	else
		std::cout << *iter << std::endl;
}

int main(void) {
	std::vector<int> vector;
	std::array<int, 10> array;
	std::deque<int> deq;

	std::cout << GRN << "Filling vector, array, and deque of ints with values 1-10..." << RST << std::endl;
	for (int i = 1; i < 11; i++) {
		vector.push_back(i);
		array[i - 1] = i;
		deq.push_back(i);
	}

	// find 1 in vector
	std::vector<int>::iterator vect_iter = easyfind(vector, 1);
	std::cout << "easyfind(vector, 1)	";
	printResult(vector, vect_iter);

	// find 2 in array
	std::array<int, 10>::iterator arr_iter = easyfind(array, 2);
	std::cout << "easyfind(array, 2)	";
	printResult(array, arr_iter);

	// find 3 in deque
	std::deque<int>::iterator deq_iter = easyfind(deq, 3);
	std::cout << "easyfind(deque, 3)	";
	printResult(deq, deq_iter);

	// in deque, replace 3 with 33
	std::cout << GRN << "In deque container, replace 3 with 33" << RST << std::endl;
	*deq_iter = 33;

	// find 3 in deque again
	deq_iter = easyfind(deq, 3);
	std::cout << "easyfind(deque, 3)	";
	printResult(deq, deq_iter);

	// in vector, replace 1 with -11
	std::cout << GRN << "In vector container, replace 1 with 11" << RST << std::endl;
	*vect_iter = -11;

	// find 11 in vector
	vect_iter = easyfind(vector, -11);
	std::cout << "easyfind(vector, -11)	";
	printResult(vector, vect_iter);

}