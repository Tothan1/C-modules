/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:23:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 17:27:42 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
Cure::Cure()
{
	type = "cure";
}








void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target << "’s wounds *"<<std::endl;
}