/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:20:03 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 16:39:34 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main (void)
{
	int N;

	N= 15;
	Zombie *tyty = zombieHorde(N, "tyty");
	tyty[0].SetName("first");
	for (int i = 0; i < N; i++)
		tyty[i].announce();
	delete [] tyty;
	return 0;
}