/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:57 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 17:11:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	Name = "default_name";
	Hit = 100;
	Energy = 50;
	Attack = 20;
	std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = src;
}
ScavTrap & ScavTrap:: operator=(ScavTrap const & src)
{
	std::cout << "Copy assignment operator Scavtrap called" << std::endl;
	this->Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
	return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Constructor ScavTrap called" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if(Energy > 0 && Hit !=0)
	{
		Attack = 1;
		std::cout << "ScavTrap "<< Name <<" attacks "<< target <<", causing "<< Attack <<" points of damage!" << std::endl;
		Attack = 0;
		Energy--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< Name <<" is now in Gate keeper mode." << std::endl;
}
