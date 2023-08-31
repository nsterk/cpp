/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 12:52:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/31 14:18:38 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


int	main(void) {

	// const Animal	*no = new Animal();
	const Cat		*yes = new Cat("Momo");

	delete yes;

	return (0);
}

