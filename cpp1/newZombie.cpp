/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:54:51 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/09 19:13:35 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie*  Zombie::newZombie( std::string name )
{
	Zombie* tyty = new Zombie();
	tyty->name = name;
	return tyty;
}