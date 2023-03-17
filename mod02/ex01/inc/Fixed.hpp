/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/03/16 20:30:31 by nsterk        ########   odam.nl         */
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
		Fixed(Fixed &original);
		~Fixed(void);
	
		/* Member functions */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		/* Operator overloads */
		Fixed&			operator=(Fixed const &rhs);

	private:

		int					_value;
		static const int	_fractionalBits = 8;
		float				_divider;
};

std::ostream&	operator<<(std::ostream& out, Fixed const &f);

#endif