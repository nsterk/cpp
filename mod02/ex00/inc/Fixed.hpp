/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:43:40 by nsterk        #+#    #+#                 */
/*   Updated: 2023/04/09 17:37:30 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "colours.hpp"

class Fixed {

	public:
		/* Constructors and destructor */
		Fixed(void);
		Fixed(Fixed const &original);
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