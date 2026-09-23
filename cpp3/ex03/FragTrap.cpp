/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:57 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 17:11:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	Name = "default_name";
	Hit = 100;
	Energy = 100;
	Attack = 30;
	std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = src;
}
FragTrap & FragTrap:: operator=(FragTrap const & src)
{
	std::cout << "Copy assignment operator Scavtrap called" << std::endl;
	this->Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
	return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Constructor FragTrap called" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}



void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap "<< Name <<" Great—FragTap won!" << std::endl;
}
