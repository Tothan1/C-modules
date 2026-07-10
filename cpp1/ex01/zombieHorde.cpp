/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:54:51 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 16:41:29 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string namee)
{
	Zombie* Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].SetName(namee);
	return (&Horde[0]);
}