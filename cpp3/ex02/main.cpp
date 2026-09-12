/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:09:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/12 18:02:57 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
ClapTrap a("tyty");
for (int i = 0; i < 25; i++)
{
	a.takeDamage(5);
}
ScavTrap u("polo");
u.attack("");
u.guardGate();

FragTrap y("pola");
a.attack("");
y.attack("");
y.highFivesGuys();

return 0;
}