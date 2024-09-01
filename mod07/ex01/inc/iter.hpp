#include <stddef.h>
#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
	void iter(T* array, size_t len, void (*func)(T &arg)) {
		for (size_t i = 0; i < len; i++)
			func(array[i]);
	};

template<typename T>
	void iter(T* array, size_t len, void (*func)(const T &arg)) {
		for (size_t i = 0; i < len; i++)
			func(array[i]);
	};

// class iter {
// 	public:
// 	  template<typename T>
// 	iter(T* array, size_t len, void (*func)(T &arg)) {
// 		for (size_t i = 0; i < len; i++)
// 			func(array[i]);
// 	};
// 	~iter(void) {};
// };

#endif