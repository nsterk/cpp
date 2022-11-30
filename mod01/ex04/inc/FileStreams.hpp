/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileStreams.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 21:50:25 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/29 23:45:42 by nsterk        ########   odam.nl         */
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
	void				openIFS(char *str);
	void				openStreams(char *str);
	void				setOFS(char *str);

private:

	std::ifstream	_ifs;
	std::ofstream	_ofs;

};

#endif