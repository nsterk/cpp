/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 13:19:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/30 19:31:54 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	this->_type = "Dog";
	this->name = "Default";
	std::cout << "A "GRN"dog "RST"spawned" << std::endl;
	this->_brain = new Brain();
	ponderLife();
}

Dog::Dog(std::string name) {

	this->_type = "Dog";
	this->name = name;
	std::cout << "A "GRN"dog"RST" named "GRN << name << RST" was born" << std::endl;
	this->_brain = new Brain();
	ponderLife();
}

Dog::Dog(Dog const &original) : _brain(new Brain()){

	*this = original;
	std::cout << "A "GRN"dog"RST" was "GRN"cloned"RST << std::endl;
}

Dog::~Dog(void) {

	delete _brain;
	std::cout << "A"PRETTY_RED" dog"RST" was murdered" << std::endl;

}

void	Dog::makeSound(void) const {

	std::cout << CYAN"loving woof"RST << std::endl;
}

Brain*	Dog::getBrain(void) const {
	
	return (_brain);
}

void	Dog::randomThought(void) const {
	
	std::cout << MAGENTA << this->name << RST" the "MAGENTA << this->_type << RST" thinks to itself: " <<_brain->ideas[(rand() % (99 - 0 + 1)) + 0] << RST << std::endl;
}

void	Dog::ponderLife(void) {
	
	int	lb = 0;
	int ub = 19;
	static std::string thoughts[20] = {
		"I love humans",
		"I love poop",
		"I love ball",
		"I love water",
		"I love food",
		"I love dogs",
		"I love grass",
		"I love mud",
		"I love walking",
		"I love naps",
		"I love love",
		"I love playing",
		"I love birds",
		"I love branches",
		"I love treats",
		"I love trains",
		"I love barking",
		"I love fetching",
		"I love summer",
		"YAY!!!!!!!!!!!!!!!!!!!!!!!!"
	};
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = thoughts[(rand() % (ub - lb + 1)) + lb];
}

Dog&	Dog::operator=(Dog const &rhs) {

	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = rhs.getBrain()->ideas[i];
	this->_type = rhs.getType();
	this->name = rhs.name;
	return (*this);
}