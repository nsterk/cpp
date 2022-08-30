/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 17:51:02 by nsterk        #+#    #+#                 */
/*   Updated: 2022/08/30 18:24:03 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <Contact.hpp>

class Phonebook {

public:

	Contact	Contacts[9];

	Phonebook( void );
	~Phonebook( void );
	
};

#endif
