/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/12 21:37:51 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>
#include <FileStreams.hpp>

class Sed {

public:

	Sed(void);
	Sed(char *s1, char *s2);
	~Sed(void);
	void	Replacer(std::string& line);

private:

	std::ifstream	_ifs;
	std::ofstream	_ofs;
	std::string 	_old;
	std::string 	_new;
	size_t			_lenOld;
	size_t			_lenNew;
	
};

#endif
