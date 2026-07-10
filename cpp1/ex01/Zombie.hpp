/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:37:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 16:41:08 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <stdlib.h>
#include <sstream>

class Zombie
{
	public:
	Zombie();
	~Zombie();
	void announce( void) ;
	void SetName( std::string nameee) ;

	private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);