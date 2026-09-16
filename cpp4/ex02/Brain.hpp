/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:40:52 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 15:21:49 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef Brain_animal
#define Brain_animal
class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain (Brain const &src);
	Brain & operator=(Brain const &src);
	~Brain();
	void setBrain(int cage, std::string ideas);
	std::string getBrain(int cage);
};


#endif