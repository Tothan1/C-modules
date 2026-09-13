/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 16:53:05 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

#ifndef Class_cat
#define Class_cat
class Cat: public Animal
{
private:
	/* data */
public:
	Cat();
	Cat(Cat const &src);
	Cat & operator=(Cat const & src);
	~Cat();
	void makeSound(void) const;
};

#endif

