/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:59:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/23 18:12:47 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
class Serializer
{
private:
	/* data */
public:
	//Form canonical
	Serializer();
	Serializer(Serializer const & other);
	Serializer &operator=(Serializer const & other);
	virtual ~Serializer() = 0;
	//Other
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif

