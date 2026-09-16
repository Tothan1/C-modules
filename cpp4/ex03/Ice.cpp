/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:23:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 10:27:50 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
Ice::Ice()
{
	type = "ice";
}








void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target << std::endl;
}