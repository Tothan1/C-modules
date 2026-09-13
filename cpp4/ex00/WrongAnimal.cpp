/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 19:06:57 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Form canonical
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor WrongAnimal." << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "Copy constructor WrongAnimal" << std::endl;
}
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	std::cout << "Copy assignment operator WrongAnimal" << std::endl;
	this->type = src.type;
	return *this;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor WrongAnimal." << std::endl;
}
std::string WrongAnimal::getType(void) const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal's!" << std::endl;
}