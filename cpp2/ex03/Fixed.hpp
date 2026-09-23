/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:48:00 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/09 18:48:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _number;
	static const int _number_const = 8;
public:
	Fixed(void);
	Fixed(const int number);
	Fixed(const float number);
	Fixed(Fixed const & fixed);
	~Fixed(void);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	//OPERATOR
	Fixed & operator=(Fixed const & fixed);
	
	bool operator>(Fixed const & a);
	bool operator<(Fixed const & a);
	bool operator>=(Fixed const & a);
	bool operator<=(Fixed const & a);
	bool operator==(Fixed const & a);
	bool operator!=(Fixed const & a);

	Fixed operator+(Fixed const & a);
	Fixed operator-(Fixed const & a);
	Fixed operator*(Fixed const & a);
	Fixed operator/(Fixed const & a);

	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);
	
	//MIN
	static Fixed const & min(Fixed const &a, Fixed const & b);
	static Fixed & min(Fixed  &a, Fixed  & b);
	//MAX
	static Fixed const & max(Fixed const &a, Fixed const & b);
	static Fixed & max(Fixed  &a, Fixed  & b);
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);

