/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2023/01/21 18:14:34 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {

	public:

	/* Member functions */
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		const std::string &getType(void);
		void setType(const std::string type);
		
	private:

		std::string _type;
};

#endif
