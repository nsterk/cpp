/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/01 14:38:03 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

public:
	Contact(void);
	~Contact(void);

	void	newContact(void);
	void	displayContact(void);
	void	previewContact(int i);
	bool	exists(void);	

private:
	std::string	_phoneNumber;
	std::string _darkestSecret;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
};

#endif
