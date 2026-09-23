/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 16:54:03 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Form canonical
Animal::Animal(void)
{
	std::cout << "Default constructor Animal." << std::endl;
}
Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Copy constructor Animal" << std::endl;
}
Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Copy assignment operator Animal" << std::endl;
	this->type = src.type;
	return *this;
}
Animal::~Animal()
{
	std::cout << "Default destructor Animal." << std::endl;
}

std::string Animal::getType(void) const
{
	return type;
}