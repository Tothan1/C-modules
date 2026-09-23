/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:57 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 17:11:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void)
{
	Name = "default_name";
	Hit = 100;
	Energy = 50;
	Attack = 30;
	std::cout << "Default constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	*this = src;
}
DiamondTrap & DiamondTrap:: operator=(DiamondTrap const & src)
{
	std::cout << "Copy assignment operator DiamondTrap called" << std::endl;
	this->Name = src.Name;
	this->Hit = src.Hit;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
	return *this;
}

DiamondTrap::DiamondTrap(std::string setting_name) : ClapTrap(setting_name + "_clap_name", 100, 50, 30), ScavTrap(setting_name), FragTrap(setting_name), Name(setting_name)
{
	std::cout << "Constructor DiamondTrap called" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name of DiamondTrap is "<< DiamondTrap::Name << " and my name of ClapTrap is "<< ClapTrap::Name << "!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
