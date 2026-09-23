/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:59:40 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/23 18:37:30 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>
#include <stdint.h>


int main (void)
{
	// Serializer test;

	Data test;
	test._nb = 45;
	uintptr_t ptr;
	ptr =Serializer::serialize(&test);
	std::cout << "adress serialize:" << ptr<< std::endl;
	Data *copy = Serializer::deserialize(ptr);
	std::cout << "adress deserialize:" << copy<< std::endl;
	std::cout <<"adress data:" << &test<< std::endl;
	if(Serializer::deserialize(ptr) == &test)
		std::cout << "egal"<< std::endl;
	std::cout<< copy->_nb << std::endl;
	std::cout<< test._nb << std::endl;
	return 0;
}