/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:09:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 14:07:15 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
ClapTrap a("tyty");
for (int i = 0; i < 25; i++)
{
	a.takeDamage(5);
}
DiamondTrap y("pola");
y.attack("sdf");
// y.highFivesGuys();
y.whoAmI();

return 0;
}