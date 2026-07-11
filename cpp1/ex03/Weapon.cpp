/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:32:41 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/11 11:52:27 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	_type = weapon;
}
void	Weapon::setType(std::string content)
{
	this->_type = content;
}

const	std::string & Weapon::getType(void) const
{
	return this->_type;
}
