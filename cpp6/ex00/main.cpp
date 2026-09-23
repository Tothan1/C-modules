/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:41:50 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 14:50:13 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
	std::string parameters;
	if(ac == 2)
	{
		parameters = static_cast <std::string> (av[1]);
		ScalarConverter::convert(parameters);
	}
	else
	{
		std::cout << "please enter just a one parameters!";
		return 0;
	}
}