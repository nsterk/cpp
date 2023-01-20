/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/01/20 21:33:08 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:

		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed &original);
		~Fixed(void);
	
		/* Member functions */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		/* Operator overloads */
		Fixed&	operator=(Fixed const &rhs);

	private:

		int					_value;
		static const int	_fractionalBits = 8;
	
};

#endif