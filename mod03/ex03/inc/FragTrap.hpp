/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 22:50:22 by nsterk        #+#    #+#                 */
/*   Updated: 2023/08/25 20:43:29 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &original);
		~FragTrap(void);
	
		FragTrap&	operator=(FragTrap const &rhs);
		void		highFivesGuys(void);
};

std::ostream&	operator<<(std::ostream& out, FragTrap const &d);

#endif