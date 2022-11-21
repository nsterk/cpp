/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 17:51:02 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/21 17:58:48 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>
#define SIZE 8

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void	addContact(size_t i);
	void	searchContact(void);
	void	previewContact(size_t i);
	void	displayContact(size_t i);

private:
	Contact	contacts[SIZE];
};

#endif
