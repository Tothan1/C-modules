/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:09:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/12 17:34:00 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
ClapTrap a("tyty");
ClapTrap b( a );
ClapTrap c("toto");
c = b;
for (int i = 0; i < 25; i++)
{
	a.takeDamage(5);
}
ScavTrap u("polo");
c.attack("");
u.attack("");
u.guardGate();

return 0;
}