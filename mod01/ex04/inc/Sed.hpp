/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/28 21:04:18 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>

class Sed {

public:

/* Member functions */
	Sed(void);
	Sed(char *name, char *s1, char *s2);
	~Sed(void);

	void				setFilename(const std::string &name);
	void				setInputFileStream(char *str);
	const std::string	&getFilename(void);

private:

	std::string		_filename;
	std::string 	_old;
	std::string 	_new;
	std::ifstream	_ifs;
	std::ifstream	_ofs;

};

#endif
