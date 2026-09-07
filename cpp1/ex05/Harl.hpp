/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:31:09 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/07 14:39:58 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL
#include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level );
};
#endif