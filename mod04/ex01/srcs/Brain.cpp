/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/27 17:09:09 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/04 15:33:04 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "A brain was born" << std::endl;
}

Brain::Brain(Brain const &original) {
	
	*this = original;
	std::cout << "A brain was cloned" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "A brain died" << std::endl;
}

Brain&	Brain::operator=(Brain const &rhs) {

	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
