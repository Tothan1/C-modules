/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:25:38 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 18:27:59 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
class ScalarConverter
{
	private:
		static std::string detection_type(std::string src);
		static void display(char c_src, int i_src, float f_src, double d_src, std::string src, std::string type);
	public:
		//Form canonical
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);
		static void convert(std::string src);
};
