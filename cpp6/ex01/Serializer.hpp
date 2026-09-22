/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:59:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 19:04:24 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

class Serializer
{
private:
	/* data */
public:
	//Form canonical
	Serializer();
	Serializer(Serializer const & other);
	Serializer &operator=(Serializer const & other);
	~Serializer();
};


