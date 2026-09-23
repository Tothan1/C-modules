/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 16:32:15 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef Class_animal
#define Class_animal

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal const &src);
	Animal & operator=(Animal const & src);
	virtual ~Animal();
	std::string getType(void) const;
	virtual void makeSound() const;
};

#endif


