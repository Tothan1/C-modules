/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:57 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 17:11:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	Name = name;
	Hit = 10;
	Energy = 10;
	Attack = 0;
}
ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	Name = name;
	Hit = hit;
	Energy = energy;
	Attack = attack;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "Copy assignment operator ClapTrap called" << std::endl;
	this->Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack= src.Attack;
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}



void ClapTrap::attack(const std::string& target)
{
	if(Energy > 0 && Hit !=0)
	{
		Attack = 1;
		std::cout << "ClapTrap "<< Name <<" attacks "<< target <<", causing "<< Attack <<" points of damage!" << std::endl;
		Attack = 0;
		Energy--;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(Hit !=0)
	{
		std::cout << "ClapTrap "<< Name <<" take damage, causing "<< amount <<" points deducted from his life!" << std::endl;
		Hit-=amount;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(Energy > 0 && Hit !=0)
	{
		std::cout << "ClapTrap "<< Name <<" repairs itself "<< amount <<" points of hit!" << std::endl;
		Energy--;
		Hit+=amount;
	}
}