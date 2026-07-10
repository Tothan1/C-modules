/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:17:48 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 19:15:49 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name)
{
}

void HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

