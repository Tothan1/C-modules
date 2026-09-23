/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 17:58:35 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/08/02 19:52:30 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout<< "[DEBUG]" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Harl::info()
{
	std::cout << "[INFO]" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning()
{
	std::cout << "[WARNING]" << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void	Harl::error()
{
	std::cout << "[ERROR]" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl::*functions[])() = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
	};
	std::string levels[] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "please enter a good level" << std::endl;
}