/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/03 21:12:23 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

public:
	Contact(void);
	~Contact(void);

	// void	newContact(void);
	// void	displayContact(void);
	// void	previewContact(int i);
	bool	exists(void);
	
	/* Getter functions */
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	
	/* Setter function */
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickname(std::string str);
	void	setPhoneNumber(std::string str);
	void	setDarkestSecret(std::string str);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string _darkestSecret;
};

// class Contact {

// public:
// 	Contact(void);
// 	~Contact(void);

// 	void	newContact(void);
// 	void	displayContact(void);
// 	void	previewContact(int i);
// 	bool	exists(void);	

// private:
// 	std::string	_phoneNumber;
// 	std::string _darkestSecret;
// 	std::string	_firstName;
// 	std::string	_lastName;
// 	std::string	_nickname;
// };

#endif
