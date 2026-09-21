/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/20 21:45:19 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// Animal test;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->getType();
	// meta->makeSound();

	delete j;
	delete i;



	Dog a;
	Dog b;
	a.setBraindog(0, "tyty");
	std::cout << "brain[0] doga:"<< a.getBraindog(0) <<std::endl;
	b = a;
	b.setBraindog(0, "toto");
	std::cout << "brain[0] dogb:"<< b.getBraindog(0) <<std::endl;
	std::cout << "brain[0] doga:"<< a.getBraindog(0) <<std::endl;
	return 0;
}