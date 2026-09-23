/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 20:29:09 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/23 21:29:20 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

Base* generate(void)
{
	Base * test;
	int valeur;
	valeur = rand()%100; //get value who find 0 to 100
	std::cout << valeur <<std::endl;
	if(valeur < 33)
		test = new A();
	else if( valeur < 67)
		test = new B();
	else
		test = new C();
	return test;
}

void identify(Base* p)
{
	B * b = dynamic_cast<B*>(p);
	C * c = dynamic_cast<C*>(p);
	if (c)
		std::cout <<"The real type of Base it's C!" <<std::endl;
	else if (b)
		std::cout <<"The real type of Base it's B!" <<std::endl;
	else
		std::cout <<"The real type of Base it's A!" <<std::endl;
}
void identify(Base& p)
{
	try
	{
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "The real type of Base it's C!" <<std::endl;
	}
	catch(std::exception & bc)
	{
		try
		{
			B & b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "The real type of Base it's B!" <<std::endl;
		}
		catch(std::exception & bc)
		{
			std::cout << "The real type of Base it's A!" <<std::endl;
		}
	}
}
int main (void)
{
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		Base * create;
		create = generate();
		identify(create);
		identify(*create);
	
		delete create;
	}
	
	return 0;
}