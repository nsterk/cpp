#include "../inc/Array.hpp"
#include <iostream>
#include <vector>

template<typename T>
void	printArray(T array, unsigned int len);
/** Exception class */

template<typename T>
class Array<T>::OutOfBoundsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Index out of bounds");
		}
};

template<typename T>
Array<T>::Array(unsigned int n): _size(n) {
	std::cout << "Array constructor called for " << n << " elements" << std::endl;
	std::vector<T> v = std::vector<T>(_size);
	_data = new T[n];
	for (size_t i = 0; i < n; i ++)
		_data[i] = v[i];
}

template<typename T>
Array<T>::Array(Array<T> const &value) {
	// std::cout << "Copy constructor called" << std::endl;
	_size = value.size();
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = value[i];
	// std::cout << value.size() << std::endl;
}

template<typename T>
Array<T>::Array(void): _size(0), _data(0) {
	std::cout << "Default constructor called" << std::endl;
}

template<typename T>
Array<T>::~Array(void) {
	if (_data) {
		delete[] _data;
	}
}

template<typename T>
unsigned int	Array<T>::size(void) const {
	return _size;
}

template<typename T>
T&	Array<T>::operator[](unsigned int idx) const {
	if (_size <= idx)
		throw OutOfBoundsException();
	return _data[idx];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const &rhs) {
	if (_size)
		delete[] _data;
	_size = rhs.size();
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = rhs[i];
	return (*this);
}