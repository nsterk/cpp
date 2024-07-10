#include "Serializer.hpp"
#include <iostream>


Serializer::Serializer(void) {}
Serializer::~Serializer(void) {}

uintptr_t	Serializer::serialize(Data* ptr) {
	if (!ptr) {
		std::cout << "thats not fair" << std::endl;
		// exit(0);
	}
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
