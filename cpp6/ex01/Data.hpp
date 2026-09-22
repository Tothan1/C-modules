/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:59:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 19:02:23 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Data
{
private:
	/* data */
public:
	//Form canonical
	Data();
	Data(Data const & other);
	Data &operator=(Data const & other);
	~Data();
	//Other
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};


