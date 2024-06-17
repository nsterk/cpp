/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 17:39:59 by nsterk        #+#    #+#                 */
/*   Updated: 2024/06/17 13:44:57 by nsterk        ########   odam.nl         */
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
		void		toChar(int value);
		void		toChar(float value);
		void		toChar(double value);
		static void		toInt(char value);
		static void		toFloat(char value);

		int			toInt(std::string value);
		float		toFloat(std::string value);
		double		toDouble(std::string value);
		static void		toDouble(char value);
};

// std::ostream&	operator<<(std::ostream& out, ScalarConverter const &obj);

#endif
