/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:48:00 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 16:36:59 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int number;
	static const int number_const;
public:
	Fixed(void);
	Fixed(Fixed const & fixed);
	Fixed & operator=(Fixed const & fixed);
	~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

