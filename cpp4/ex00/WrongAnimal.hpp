/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:47:16 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/13 19:08:35 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef Class_wrong_animal
#define Class_wrong_animal

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal & operator=(WrongAnimal const & src);
	~WrongAnimal();
	std::string getType(void) const;
	void makeSound() const;
};


#endif
