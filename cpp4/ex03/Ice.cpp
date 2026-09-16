/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:23:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 16:45:50 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(Ice const & src) : AMateria(src)
{}
Ice & Ice::operator=(Ice const & src)
{
	if(this == &src)
		return(*this);
	_type = src.getType();
	return *this;
}

Ice::~Ice()
{}



Ice* Ice::clone() const
{
	return (new Ice());
}




void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << std::endl;
}