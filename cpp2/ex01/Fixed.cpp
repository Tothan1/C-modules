/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:47:57 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/09 12:36:15 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_number = 0;
}
Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	_number = number * (1 << _number_const);
}
Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	_number = roundf(number * (1 << _number_const));
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = src._number;
	// this->number_const = src.number_const;
	return *this;
}

std::ostream& operator<<(std::ostream& os, Fixed const& fixed)
{
	os << fixed.toFloat();
	return os;
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

int Fixed::toInt( void ) const
{
	return(_number >> _number_const);
}

float Fixed::toFloat( void ) const
{
	return((float) _number / (1 << _number_const));
}






int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_number);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_number = raw;
}
