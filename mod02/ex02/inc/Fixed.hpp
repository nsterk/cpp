/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/19 21:09:41 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(Fixed const &original);
		~Fixed(void);
	
		/* Member functions */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		/* Arithmetic operators */
		Fixed&	operator=(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		
		/* Comparison operators */
		bool	operator<(Fixed const &rhs) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;

	private:

		int					_value;
		static const int	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& out, Fixed const &f);

#endif