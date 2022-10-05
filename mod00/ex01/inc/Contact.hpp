/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/05 21:34:27 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

public:

/* Member functions */
	Contact(void);
	~Contact(void);

	Contact	new_Contact(void);
	void	display_contact(void);

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

private:

/* Member attributes */
	std::string	phone_number;
	std::string darkest_secret;
};

#endif
