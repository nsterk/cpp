/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsterk <nsterk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/20 15:22:41 by nsterk        #+#    #+#                 */
/*   Updated: 2022/12/26 15:51:26 by nsterk        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>
#include <iostream>

int	main(void)
{
	{
		Weapon danger = Weapon("\033[36mzwaarden op haar kamer\033[0m");
		HumanA human("\033[36mRegina\033[0m", danger);
		human.attack();

		danger.setType("\033[36mzwaarden in haar achtertuin\033[0m");
		human.attack();
	}
	{
		Weapon highvoltage = Weapon("\033[35melectrical current\033[0m");
	
		HumanB humanB("\033[35mSinterklaas\033[0m");
		humanB.attack();
		humanB.setWeapon(highvoltage);
		humanB.attack();
		highvoltage.setType("\033[35mpietermannen\033[0m");
		humanB.attack();
	}
	return (0);
}
