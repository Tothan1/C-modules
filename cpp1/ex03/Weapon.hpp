/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:23:06 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 18:59:20 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string weapon);
	~Weapon();
	std::string & getType();
	void	setType(std::string content);
};
#endif
