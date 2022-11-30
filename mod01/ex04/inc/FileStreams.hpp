/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileStreams.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 21:50:25 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/30 20:26:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTREAMS_HPP
# define FILESTREAMS_HPP

#include <fstream>

class FileStreams {

public:

	FileStreams(void);
	~FileStreams(void);

	const std::ifstream &getIFS(void);
	const std::ofstream &getOFS(void);
	void				openStreams(const char *str);
	void				closeStreams(void);

private:

	std::ifstream	_ifs;
	std::ofstream	_ofs;

};

#endif