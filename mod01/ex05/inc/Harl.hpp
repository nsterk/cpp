/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 20:19:56 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/14 18:17:13 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

// # define DEBUG		"DEBUG"
// # define INFO		"INFO"
// # define WARNING	"WARNING"
// # define ERROR		"ERROR"

class Harl {

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

typedef enum e_level {
	DEBUG,
	INFO,
	WARNING,
	ERROR
}				t_level;

typedef	void	(*t_complaint)(void);

#endif
