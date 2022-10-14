/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/14 20:48:25 by nsterk        ########   odam.nl         */
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

	int		newContact(Contact *c);
	void	displayContact(void);

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;

private:

/* Member attributes */
	std::string	phoneNumber;
	std::string darkestSecret;
};

#endif
