/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 16:55:23 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Form canonical
Dog::Dog(void)
{
	std::cout << "Default constructor Dog." << std::endl;
	type = "Dog";
}
Dog::Dog(Dog const &src) : Animal()
{
	*this = src;
	std::cout << "Copy constructor Dog" << std::endl;
}
Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Copy assignment operator Dog" << std::endl;
	this->type = src.type;
	return *this;
}
Dog::~Dog()
{
	std::cout << "Default destructor Dog." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}