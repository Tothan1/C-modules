/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:17:30 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 19:04:57 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon _weapon;
	std::string _name;
public:
	void attack();
	HumanA(std::string name, Weapon typeWeapon);
	~HumanA();
};
#endif