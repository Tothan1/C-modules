/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:23:13 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/20 19:08:01 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

std::string ScalarConverter::detection_type(std::string src)
{
	int index;

	index = 0;
	std::string pseudo_literals[3];
	pseudo_literals[0] = "nan";
	pseudo_literals[1] = "+inf";
	pseudo_literals[2] = "-inf";
	if(src.size() == 0)
		return ("empty");
	if(src.size() == 1 && !std::isdigit(src[0]))
		return("char");
	for (int i = 0; i < 3; i++)
	{
		if(pseudo_literals[i] == src)
			return("double");
		if(pseudo_literals[i].insert(pseudo_literals[i].size(), "f") == src)
			return("float");
	}
	if(src[0] == '-' || src[0] == '+')
		index ++;
	if(src.find('.'))
	{
		if(src[src.size() - 1]=='f')
			return("float");
		else
			return("double");
	}
	else
	{
		for (int i = 0; i < src.size()-index; i++)
		{
			if(std::isdigit(src[i] + index))
				return("int");
		}
		return ("no_type");
	}
}
void display(char c_src, int i_src, float f_src, double d_src)
{
	std::cout << "char: " << c_src<< std::endl;
	std::cout << "int: " << i_src<< std::endl;
	std::cout << "float: " << f_src<< std::endl;
	std::cout << "double: " << d_src<< std::endl;
}

void ScalarConverter::convert(std::string src)
{
	char const * tab_src;

	ScalarConverter::detection_type(src);
	char c_src;
	int i_src;
	float f_src;
	double d_src;

	tab_src = src.c_str();
	c_src = static_cast <char> (tab_src[0]);
	// i_src = static_cast <int> (tab_src);
	d_src = std::atof(tab_src);
	f_src = static_cast <float> (d_src);
	i_src = static_cast <int> (d_src);
}