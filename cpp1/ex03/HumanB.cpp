/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:17:48 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/11 11:59:06 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if(_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}


// HumanB::~HumanB()
// {
// 	if(_weapon)
// 		delete _weapon;
// }