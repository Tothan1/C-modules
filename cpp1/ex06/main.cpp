/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 17:58:38 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/08/10 08:14:56 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl harl;

	if(ac != 2)
	{
		std::cout << "Enter just a one parameter!!!" << std::endl;
		return (1);
	}

	harl.complain(std::string(av[1]));
	return 0;
}