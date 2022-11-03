/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 17:51:02 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/03 21:11:50 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void	addContact(size_t i);
	void	searchContact(void);
	void	previewContact(size_t i);
	void	displayContact(size_t i);

private:
	Contact	contacts[8];
};

// class Phonebook {

// public:

// 	Contact	Contacts[8];

// 	Phonebook(void);
// 	~Phonebook(void);

// 	void	searchContact(void);	

// };

#endif
