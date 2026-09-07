/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:09:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/07 15:37:58 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Harl.hpp"

int main (void)
{
	Harl test;
	test.complain("sldf");
	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
}