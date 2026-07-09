/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:37:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/09 19:02:00 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...";
}



Zombie::~Zombie()
{
	std::cout << "destructor called with: "<< name;
}