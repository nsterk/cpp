/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:39:59 by nsterk        #+#    #+#                 */
/*   Updated: 2023/12/08 15:22:22 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include "colours.hpp"

class ScalarConverter {
	public:
		static void	convert(std::string	value);

	private:
		ScalarConverter(void);
		~ScalarConverter(void);
};

// std::ostream&	operator<<(std::ostream& out, ScalarConverter const &obj);

#endif
