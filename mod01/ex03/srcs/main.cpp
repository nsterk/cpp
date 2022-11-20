/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 15:22:41 by nsterk        #+#    #+#                 */
/*   Updated: 2022/11/20 17:36:52 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>
#include <iostream>

int	main(void)
{
	{
		Weapon danger = Weapon("zwaarden op haar kamer");
		HumanA human("Regina", danger);
		human.attack();

		danger.setType("zwaarden in haar achtertuin");
		human.attack();
	}
	{
		Weapon highvoltage = Weapon("electrical current");
	
		HumanB humanB("Sinterklaas");
		humanB.attack();
		humanB.setWeapon(highvoltage);
		humanB.attack();
		highvoltage.setType("pietermannen");
		humanB.attack();
	}
	return (0);
}
