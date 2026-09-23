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
	_brain = new Brain();
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
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return *this;
}
Dog::~Dog()
{
	std::cout << "Default destructor Dog." << std::endl;
	delete _brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

void Dog::setBraindog(int cage, std::string ideas)
{
	_brain->setBrain(cage, ideas);
}
std::string Dog::getBraindog(int cage)
{
	return(_brain->getBrain(cage));
}