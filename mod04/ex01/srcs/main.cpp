/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 12:52:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/31 13:53:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

/**
 * Demonstrates that the copy constructor creates a deep copy.
 * After creating a copy, one of the member attributes of the
 * original is changed. If the copy was shallow, that same
 * member attribute in the copy would now also have a different value.
 */
void	testCopy(void) {

	const Cat	OG;

	std::cout << BACK_GRN"Deep copy demonstration"RST << std::endl;

	Cat Copycat(OG);
	
	std::cout << BACK_WHT"Before changing idea of original"RST<< std::endl;

	std::cout << "og ideas[0]: " << OG.getBrain()->ideas[0] << std::endl;
	std::cout << "copycat ideas[0]: " << Copycat.getBrain()->ideas[0] << std::endl;

	std::cout << BACK_WHT"After changing idea of original"RST<< std::endl;
	OG.getBrain()->ideas[0] = "I changed my mind";

	std::cout << "og ideas[0]: " << OG.getBrain()->ideas[0] << std::endl;
	std::cout << "copycat ideas[0]: " << Copycat.getBrain()->ideas[0] << std::endl;
}

int	main(void) {

	/* Subject */

	const Animal *zoo;

	/* Construction / destruction chaining & member functions */
	
	// {
	// 	const Animal	*Skeletor = new Animal();
	// 	const Cat	*Momo = new Cat("Momo");
	// 	const Dog	*Fikkie = new Dog("Fikkie");
		
	// 	std::cout << "Skeletor is an animal of type "CYAN << Skeletor->getType() << RST" and it says: ";
	// 	Skeletor->makeSound();
	// 	std::cout << "Momo is an animal of type "CYAN << Momo->getType() << RST" and she says: ";
	// 	Momo->makeSound();
	// 	std::cout << "Fikkie is an animal of type "CYAN << Fikkie->getType() << RST" and it says: ";
	// 	Fikkie->makeSound();	
	
	// 	delete Skeletor;
	// 	delete Fikkie;
	// 	delete Momo;
	// }

	/* Demonstrates that copy constructor creates deep copy */
	testCopy();
	return (0);
}
