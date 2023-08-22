/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 12:52:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/04 16:14:05 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

#define N 4

void	testCopy(void);
void	destructionChaning(void);

int	main(void) {

	/* Subject */

	Animal *zoo[N];

	std::cout << BACK_WHT"THE CREATION"RST << std::endl;
	for (size_t i = 0; i < N; i++)
	{
		std::cout << U_WHT"\nAnimal nr " << i << RST"\n";
		if (i % 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}
	std::cout << BACK_WHT"THE DESTRUCTION"RST << std::endl;
	for (size_t i = 0; i < N; i++)
	{
		std::cout << U_WHT"\nAnimal nr " << i << RST"\n";
		delete zoo[i];
	}

	/* Construction / destruction chaining & member functions */
	// destructionChaning();
	
	/* Demonstrates that copy constructor creates deep copy */
	// testCopy();
	return (0);
}

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

void	destructionChaning(void)
{
	const Animal	*Skeletor = new Animal();
	const Cat	*Momo = new Cat("Momo");
	const Dog	*Fikkie = new Dog("Fikkie");
	
	std::cout << "Skeletor is an animal of type "CYAN << Skeletor->getType() << RST" and it says: ";
	Skeletor->makeSound();
	std::cout << "Momo is an animal of type "CYAN << Momo->getType() << RST" and she says: ";
	Momo->makeSound();
	std::cout << "Fikkie is an animal of type "CYAN << Fikkie->getType() << RST" and it says: ";
	Fikkie->makeSound();	

	/* I added a function that fills the brains with random thoughts. Run this to see */
	// for (int i = 0; i < 10; i++)
	// {
	// 	Fikkie->randomThought();
	// 	Momo->randomThought();
	// }
	delete Skeletor;
	delete Fikkie;
	delete Momo;
}
