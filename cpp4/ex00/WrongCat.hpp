/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 16:53:05 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"


#ifndef Class_wrong_cat
#define Class_wrong_cat

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat & operator=(WrongCat const & src);
	~WrongCat();
	void makeSound() const;
};

#endif

