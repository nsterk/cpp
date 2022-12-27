/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/23 22:17:56 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);

private:

	std::string _name;

};

Zombie *zombieHorde(int N, std::string name);

#endif
