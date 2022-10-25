/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 20:36:12 by nsterk        ########   odam.nl         */
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
	void	previewContact(int i);
	bool	exists(void);	

private:

/* Member attributes */
	std::string	phoneNumber;
	std::string darkestSecret;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
};

#endif
