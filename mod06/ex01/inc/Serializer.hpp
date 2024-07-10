#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>
#include <string>

struct Data {
	std::string name;
	int age;
};

class Serializer {
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
	
	private:
		Serializer(void);
		~Serializer(void);
};

#endif