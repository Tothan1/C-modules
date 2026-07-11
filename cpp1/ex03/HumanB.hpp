/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:17:30 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/11 11:59:24 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;
public:
	void attack();
	void setWeapon(Weapon &weapon);
	HumanB(std::string name);
};
#endif
