/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 12:52:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/30 19:19:09 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// const Animal& momoref = *Momo;
// momoref.makeSound();
	
int	main(void) {

	// const WrongAnimal	*Skeletor = new WrongAnimal();
	// const WrongCat	*Momo = new WrongCat();
	// const Dog	*Fikkie = new Dog();

	const Animal	*Skeletor = new Animal();
	const Cat	*Momo = new Cat("Momo");
	const Dog	*Fikkie = new Dog("Fikkie");
	
	std::cout << "Skeletor is an animal of type "CYAN << Skeletor->getType() << RST" and it says: ";
	Skeletor->makeSound();
	std::cout << "Momo is an animal of type "CYAN << Momo->getType() << RST" and she says: ";
	Momo->makeSound();
	std::cout << "Fikkie is an animal of type "CYAN << Fikkie->getType() << RST" and it says: ";
	Fikkie->makeSound();

	delete Skeletor;
	delete Momo;
	delete Fikkie;
	return (0);
}
