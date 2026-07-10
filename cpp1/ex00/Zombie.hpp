/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:37:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 15:32:29 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <stdlib.h>
#include <sstream>

class Zombie
{
	public:
	Zombie(std::string nameee);
	~Zombie();
	void announce( void) ;
	Zombie* newZombie( std::string nameee );
	void randomChump( std::string nameee );

	private:
	std::string name;
};
