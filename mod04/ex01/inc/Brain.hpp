/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/27 17:04:45 by nsterk        #+#    #+#                 */
/*   Updated: 2023/07/27 17:59:43 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

	public:
		Brain(void);
		Brain(Brain const &original);
		~Brain(void);

		Brain& operator=(Brain const &rhs);
	
		std::string	ideas[100];
};

#endif