/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/02/11 21:03:07 by nsterk        ########   odam.nl         */
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
		Fixed&		operator=(Fixed const &rhs);
		//Fixed&		operator+()

	private:

		int					_value;
		static const int	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& out, Fixed const &f);

#endif