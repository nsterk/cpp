/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 20:12:14 by nsterk        #+#    #+#                 */
/*   Updated: 2022/10/25 21:12:54 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>
#include <iostream>

void		displayString(std::string str, char c);
int			getIndex(int i);
std::string	getField(std::string prompt);
bool		Valid(std::string str);

#endif