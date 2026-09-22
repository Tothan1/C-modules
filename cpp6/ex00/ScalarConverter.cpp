/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:23:13 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 18:09:36 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <iomanip>

std::string ScalarConverter::detection_type(std::string src)
{
	int index;

	index = 0;
	std::string pseudo_literals[3];
	pseudo_literals[0] = "nan";
	pseudo_literals[1] = "+inf";
	pseudo_literals[2] = "-inf";
	if(src.size() == 0)
		return ("no_type");
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
	if(src.find('.')!=std::string::npos)
	{
		if(src[src.size() - 1]=='f')
			return("float");
		else
			return("double");
	}
	else
	{
		for (size_t i = 0; i < src.size()-index; i++)
		{
			if(std::isdigit(src[i+index] ))
				return("int");
		}
		return ("no_type");
	}
}
void ScalarConverter::display(char c_src, int i_src, float f_src, double d_src, std::string src, std::string type)
{
	(void) src;
	if (i_src && (i_src >= 32 && i_src < 127))
		std::cout << "char: '" << c_src<< "'"<<std::endl;
	else if((i_src == 127 || (i_src <32 && i_src >=0)) && type != "no_type")
		std::cout << "char: " << "Non displayable"<< std::endl;
	else
		std::cout << "char: " << "impossible"<< std::endl;
	if(type != "no_type" && (d_src < 2147483648 &&  d_src > -2147483649))
		std::cout << "int: " << i_src<< std::endl;
	else
		std::cout << "int: " << "impossible"<< std::endl;
	std::cout << std::fixed << std::setprecision(1);
	if( type != "no_type")
	{
		std::cout << "float: " << f_src<<"f"<<std::endl;
		std::cout  << "double: " << d_src<<std::endl;
	}
	else
	{
		std::cout << "float: " << "impossible"<<std::endl;
		std::cout  << "double: " << "impossible"<<std::endl;
	}
}

void ScalarConverter::convert(std::string src)
{
		char c_src;
	int i_src;
	float f_src;
	double d_src;
	char const * tab_src;
	std::string type;

	type = ScalarConverter::detection_type(src);
	tab_src = src.c_str();
	if(type == "char")
	{
		c_src = tab_src[0]; 
		d_src = c_src ;
		f_src = static_cast <float> (d_src);
		i_src = static_cast <int> (d_src);
	}
	else if( type == "float" || type == "double" || type == "int")
	{
		d_src = std::atof(tab_src) ;
		f_src = static_cast <float> (d_src);
		if(type == "int" || src.find('.')!=std::string::npos)
			i_src = static_cast <int> (d_src);
		if (i_src && (i_src >= 32 && i_src < 127))
			c_src = i_src; 
	}
	ScalarConverter::display(c_src, i_src, f_src, d_src, src, type);
}