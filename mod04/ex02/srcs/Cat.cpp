/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/30 19:45:09 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <cstdlib>

Cat::Cat(void) {

	std::cout << "A "GRN"cat "RST"spawned" << std::endl;
	this->name = "Nameless";
	this->_type = "Cat";
	this->_brain = new Brain();
	ponderLife();
}

Cat::Cat(std::string name) {

	this->_type = "Cat";
	this->name = name;
	std::cout << "A "GRN"cat"RST" named "GRN << name << RST" was born" << std::endl;
	this->_brain = new Brain();
	ponderLife();
}

Cat::Cat(Cat const &original) : _brain(new Brain()){

	*this = original;
	std::cout << "A "GRN"cat"RST" was "GRN"cloned"RST << std::endl;
}

Cat::~Cat(void) {

	if (_brain)
		delete _brain;
	std::cout << "A"PRETTY_RED" cat"RST" was murdered" << std::endl;
}

void	Cat::makeSound(void) const {

	std::cout << CYAN"meow meow bitch"RST << std::endl;
}

Brain*	Cat::getBrain(void) const {
	
	return (_brain);
}

void	Cat::randomThought(void) const {
	
	std::cout << BLUE << this->name << RST" the "BLUE << this->_type << RST" thinks to itself: " <<_brain->ideas[(rand() % (99 - 0 + 1)) + 0] << RST << std::endl;
}

void	Cat::ponderLife(void) {
	
	int	lb = 0;
	int ub = 19;
	static std::string thoughts[20] = {
		"Why don't I have opposable thumbs",
		"I wish I was a cloud",
		"That shoe looks yummy",
		"For I am become death, destroyer of worlds",
		"Ik heb een toe toe toeter op mijn waterscooter",
		"I want this object gone from this surface",
		"Who disturbs my slumber?!",
		"Peasants",
		"I am going to kill you in your sleep",
		"meow meow meow meow meow meow fish",
		"When is the red dot coming back?",
		"Check out my anus",
		"Time for a nap",
		"random existential crisis",
		"What's this? My own vomit? Yummy",
		"oh my GOD a FLY go AWAY fly chirp chirp chirp",
		"Stop looking at me",
		"Stop ignoring me",
		"Te be or not to be, that is a saying",
		"I wonder what the biggest prime number I can memorize is",
	};
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = thoughts[(rand() % (ub - lb + 1)) + lb];
}

/**
 * If this was the copy assignment overload, the copy would be a shallow
 * copy instead of a deep copy. Comment out the real overload and uncomment
 * this to test. Don't compile with fsanitize=address, it will complain
 * about a double free. It's only for demonstration purposes.
 */

// Cat&	Cat::operator=(Cat const &rhs) {

// 	_brain = rhs.getBrain();
// 	this->_type = rhs.getType();
// 	this->name = rhs.name;
// 	return (*this);
// }

Cat&	Cat::operator=(Cat const &rhs) {

	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = rhs.getBrain()->ideas[i];
	this->_type = rhs.getType();
	this->name = rhs.name;
	return (*this);
}
