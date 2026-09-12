/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:48:00 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 16:36:59 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef Claptrap
#define Claptrap
class ClapTrap
{
protected:
	std::string Name;
	int Hit;
	int Energy;
	int Attack;
public:
	ClapTrap(std::string Name);
	ClapTrap(std::string Name, int hit, int energy, int attack);
	ClapTrap(ClapTrap const & fixed);
	ClapTrap & operator=(ClapTrap const & fixed);
	~ClapTrap(void);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif
