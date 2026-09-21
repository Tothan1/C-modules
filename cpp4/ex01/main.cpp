/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/20 21:42:17 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << std::endl;

	// Animal* animals[4] = {
	// new Dog(),
	// new Dog(),
	// new Cat(),
	// new Cat()
	// };
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete animals[i];
	// }
	Dog a;
	Dog b;
	a.setBraindog(0, "tyty");
	std::cout << "brain[0] doga:"<< a.getBraindog(0) <<std::endl;
	b = a;
	b.setBraindog(0, "toto");
	std::cout << "brain[0] dogb:"<< b.getBraindog(0) <<std::endl;
	std::cout << "brain[0] doga:"<< a.getBraindog(0) <<std::endl;

	std::cout << std::endl;

	// delete j;//should not create a leak
	// delete i;
	return 0;
}