/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:39:59 by nsterk        #+#    #+#                 */
/*   Updated: 2024/06/17 14:18:12 by nsterk        ########   odam.nl         */
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
		static char		toChar(std::string value);
		static void		toChar(int value);
		static void		toChar(float value);
		static void		toChar(double value);
		static int		toInt(std::string value);
		static void		toInt(char value);
		static void		toFloat(char value);

		static float	toFloat(std::string value);
		static double	toDouble(std::string value);
		static void		toDouble(char value);
};

// std::ostream&	operator<<(std::ostream& out, ScalarConverter const &obj);

#endif
