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
