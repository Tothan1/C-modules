/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:41:10 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 15:28:15 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor Brain." << std::endl;
}
Brain::Brain (Brain const &src)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = src.ideas[i];
}
Brain & Brain::operator=(Brain const &src)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = src.ideas[i];
	return *this;
}
Brain::~Brain()
{
	std::cout << "Default destructor Brain." << std::endl;
}


void Brain::setBrain(int cage, std::string ideas)
{
	this->ideas[cage] =ideas;
}
std::string Brain::getBrain(int cage)
{
	return ideas[cage];
}