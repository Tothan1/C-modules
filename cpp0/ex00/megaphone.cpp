/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 19:31:25 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/09 15:56:20 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main (int ac, char ** av)
{
	std::string input_user;
	if( ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			input_user += av[i];
		for (int i = 0; i < (int)input_user.size(); i++)
			input_user[i] = toupper(input_user[i]);
		std::cout << input_user;
		std::cout << std::endl;
	}
	return (0);
}