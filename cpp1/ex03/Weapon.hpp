/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:23:06 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/11 11:49:56 by tle-rhun         ###   ########.fr       */
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
	const	std::string & getType() const;
	void	setType(std::string content);
};
#endif
