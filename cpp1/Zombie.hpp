/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:37:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/09 19:13:58 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <stdlib.h>
#include <sstream>

class Zombie
{
	public:
	~Zombie();
	void announce( void) ;
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

	private:
	std::string name;
};
