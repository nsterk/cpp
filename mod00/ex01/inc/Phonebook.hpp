/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 17:51:02 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/05 21:35:00 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>

class Phonebook {

public:

	Contact	Contacts[8];

	Phonebook( void );
	~Phonebook( void );

	void	display_list( void );
	
};

#endif
