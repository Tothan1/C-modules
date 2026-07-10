/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:37:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 16:19:16 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
	// std::cout << "constructor called with: "<< std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::SetName( std::string nameee)
{
	this->name = nameee;
}


Zombie::~Zombie()
{
	std::cout << "destructor called with: "<< this->name << std::endl;
}