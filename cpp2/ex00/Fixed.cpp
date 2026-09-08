/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:57 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 16:46:36 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	number = 0;
}


Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = src.getRawBits();
	// this->number_const = src.number_const;
	return *this;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}





int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	number = raw;
}
