/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 19:31:25 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/05 20:19:15 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main (int ac, char ** av)
{
	std::string input_user;
	char c;
	if( ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			input_user += av[i];
		for (int i = 0; i < (int)input_user.size(); i++)
		{
			if (input_user[i] < 123 && input_user[i] > 96)
			{
				c = input_user[i] - 32;
				std::cout << c;
			}
			else
				std::cout << input_user[i];
		}
		std::cout << std::endl;
	}
	
	return (0);
}