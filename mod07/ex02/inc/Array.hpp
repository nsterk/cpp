#include <stdlib.h>

#ifndef ARRAY_HPP
# define ARRAY_HPP


  template<typename T>
class Array {
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const &value);
		~Array(void);

		class			OutOfBoundsException;
		unsigned int	size(void) const;
    
		T&				operator[](unsigned int idx) const;
		Array<T>&		operator=(Array<T> const &rhs);
	
	private:
		unsigned int	_size;
		T*				_data;
};

#include "../srcs/Array.tpp"

#endif