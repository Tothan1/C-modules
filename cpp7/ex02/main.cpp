/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:00:55 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/29 18:22:02 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>



int main( void )
{
	std::cout << "--- Test 1 : Tableau vide ---"<< std::endl;
	Array<std::string> empty;
	std::cout << empty.size()<< std::endl;
	try
	{
		std::cout << empty[0]<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << "--- Test 2 : Tableau d'entiers et initialisation ---"<< std::endl;
	Array<int> nb(3);
	for (size_t i = 0; i < 3; i++)
		std::cout << nb[i];
	std::cout << std::endl;
	for (size_t i = 0; i < 3; i++)
		nb[i]+=i*10 + 10;
	for (size_t i = 0; i < 3; i++)
		std::cout << nb[i];
	std::cout << std::endl;

	std::cout << "--- Test 3 : Indépendance des copies (Deep Copy) ---"<< std::endl;
	Array<int> copy(nb);
	Array<int> assigned;
	assigned = nb;
	nb[0] =99;

	std::cout << "tab numbers" <<std::endl;
	for (size_t i = 0; i < 3; i++)
			std::cout << nb[i];
		std::cout << std::endl;

	std::cout << "tab copy" <<std::endl;
	for (size_t i = 0; i < 3; i++)
			std::cout << copy[i];
		std::cout << std::endl;

	std::cout << "tab assigned" <<std::endl;
	for (size_t i = 0; i < 3; i++)
			std::cout << assigned[i];
		std::cout << std::endl;

	// std::cout << "--- Test 4 : Gestion des bornes ---"<< std::endl;
	// Array<std::string> empty;
	// std::cout << empty.size()<< std::endl;
	// std::cout << empty[0]<< std::endl;
}