/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:02:28 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/23 18:14:16 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//Form canonical
Serializer::Serializer()
{
}
Serializer::Serializer(Serializer const & other)
{
	*this = other;
}
Serializer & Serializer::operator=(Serializer const & other)
{
	(void) other;
	return *this;
}
Serializer::~Serializer()
{
}

//Other
uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t src;
	src = reinterpret_cast<uintptr_t> (ptr);//implicit cast because it's promotion
	return src;
}
Data* Serializer::deserialize(uintptr_t raw)
{
	Data * src;
	src = reinterpret_cast<Data *> (raw);//implicit cast because it's promotion
	return src;
}