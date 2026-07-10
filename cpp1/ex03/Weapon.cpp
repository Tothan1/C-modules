/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:32:41 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 18:59:48 by tle-rhun         ###   ########.fr       */
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

std::string & Weapon::getType(void)
{
	std::string &typeREF = this->_type;
	return(typeREF);
}
