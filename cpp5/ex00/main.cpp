/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:41:50 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 16:10:03 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
int main (void)
{
	try
	{
		Bureaucrat tyty("42", 151);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat toto("42", 0);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat toto("tyty", 142);
		for (int i = 0; i < 10; i++)
		{
			toto.decrementGrade();
			std::cout << toto;
		}
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}