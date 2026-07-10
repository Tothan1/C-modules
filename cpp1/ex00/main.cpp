/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:20:03 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 15:30:29 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void test(void)
{
	Zombie cacahuètes = Zombie("cacahuètes");
	Zombie *tyty = cacahuètes.newZombie("tyty");
	cacahuètes.randomChump("tothan");
	std::cout << "after function member randomChump" << std::endl;
	tyty->announce();
	delete tyty;
	return;
}

int main (void)
{
	// Zombie *mallocc;
	test();
	// mallocc->announce();
	std::cout << "after function test" << std::endl;
	// delete mallocc;
	return 0;
}