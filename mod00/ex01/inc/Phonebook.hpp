/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 17:51:02 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/03 19:22:04 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>

class Phonebook {

public:

	Contact	Contacts[8];

	Phonebook(void);
	~Phonebook(void);

	void	searchContact(void);	

};



#endif
