/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/20 16:23:03 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <Weapon.hpp>

class HumanA {

public:

/* Member functions */
	HumanA(void);
	HumanA(std::string name, Weapon &weapon); //HumanA always takes the weapon in its constructor and will always be armed. So weaponA can use a reference.
	~HumanA(void);

	void attack(void);

private:

	std::string _name;
	Weapon		&_weapon;

};

#endif
