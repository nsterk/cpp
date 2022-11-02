/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 20:12:14 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/01 15:11:43 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

void		displayString(std::string str, char c);
int			getIndex(int i);
std::string	getField(std::string prompt);
bool		valid(std::string str);

#endif