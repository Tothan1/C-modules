/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:17:48 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/11 12:24:50 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &typeWeapon)
: _weapon(typeWeapon), _name(name)
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

