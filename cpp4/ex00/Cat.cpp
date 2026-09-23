/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 16:55:23 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Form canonical
Cat::Cat(void)
{
	std::cout << "Default constructor Cat." << std::endl;
	type = "Cat";
}
Cat::Cat(Cat const &src) : Animal()
{
	*this = src;
	std::cout << "Copy constructor Cat" << std::endl;
}
Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Copy assignment operator Cat" << std::endl;
	this->type = src.type;
	return *this;
}
Cat::~Cat()
{
	std::cout << "Default destructor Cat." << std::endl;
}
void Cat::makeSound(void) const
{
	std::cout << "Miaou!" << std::endl;
}