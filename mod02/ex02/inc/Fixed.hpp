/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/09 17:40:19 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include "colours.hpp"

class Fixed {

	public:
		/* Constructors and destructor */
		Fixed(void);
		Fixed(Fixed const &original);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed(void);
	
		/* Member functions (non-static) */
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

		/* Increment and decrement operators */
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
	
		/* Comparison operators */
		bool	operator<(Fixed const &rhs) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		/* Static member functions (must be defined inside class body) */
		static Fixed const&	min(Fixed const &a, Fixed const &b) {return (a.getRawBits() < b.getRawBits() ? a : b);};
		static Fixed&		min(Fixed &a, Fixed &b) {return (a.getRawBits() < b.getRawBits() ? a : b);};
		static Fixed const&	max(Fixed const &a, Fixed const &b) {return (a.getRawBits() > b.getRawBits() ? a : b);};
		static Fixed&		max(Fixed &a, Fixed &b) {return (a.getRawBits() > b.getRawBits() ? a : b);};

	private:

		int					_value;
		static const int	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& out, Fixed const &f);

#endif