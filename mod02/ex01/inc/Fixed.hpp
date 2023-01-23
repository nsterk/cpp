/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/01/21 18:57:01 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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
		Fixed&	operator=(Fixed const &rhs);

	private:

		int					_value;
		static const int	_fractionalBits = 8;
	
};

#endif