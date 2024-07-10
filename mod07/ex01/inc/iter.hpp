#include <stddef.h>
#ifndef ITER_HPP
# define ITER_HPP

class iter {
	public:
	  template<typename T>
	iter(T* array, size_t len, void (*func)(T arg)) {
		for (size_t i = 0; i < len; i++)
			func(array[i]);
	};
	~iter(void) {};
};

#endif