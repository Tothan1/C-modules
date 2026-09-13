/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 19:06:18 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Form canonical
WrongCat::WrongCat(void) 
{
	std::cout << "Default constructor WrongCat." << std::endl;
	type = "Wrong Cat";
}
WrongCat::WrongCat(WrongCat const &src): WrongAnimal()
{
	*this = src;
	std::cout << "Copy constructor WrongCat" << std::endl;
}
WrongCat & WrongCat::operator=(WrongCat const & src)
{
	std::cout << "Copy assignment operator WrongCat" << std::endl;
	this->type = src.type;
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << "Default destructor WrongCat." << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou!" << std::endl;
}