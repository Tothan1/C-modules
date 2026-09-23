/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 16:53:05 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef Class_dog
#define Class_dog
class Dog: public Animal
{
private:
	Brain * _brain;
public:
	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const & src);
	~Dog();
	void makeSound(void) const;
	void setBraindog(int cage, std::string ideas);
	std::string getBraindog(int cage);
};

#endif

