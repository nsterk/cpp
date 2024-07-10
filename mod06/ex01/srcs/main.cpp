#include "Serializer.hpp"
#include <iostream>


int	main(void) {
	Data* original = new Data;
	original->name = "jezus";
	original->age = 33;

	uintptr_t test = Serializer::serialize(original);
	Data* deserialized = Serializer::deserialize(test);
	std::cout << "deserialized->name: " << deserialized->name << std::endl;
	std::cout << "deserialized->age: " << deserialized->age << std::endl;
	original->name = "JEEEEEEEEESUS CHRIST";
	std::cout << "deserialized->name after changing original: " << deserialized->name << std::endl;
	delete original;
	
	Data* empty = NULL;
	uintptr_t emptytest = Serializer::serialize(empty);
	std::cout << Serializer::deserialize(emptytest) << std::endl;
	return (0);
}