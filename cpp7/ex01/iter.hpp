/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:55:53 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/29 11:21:44 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>


template <typename B>
void print_generique(B const &adress)
{
	std::cout << adress;
}

template <typename A>
void increment(A &adress)
{
	adress++;
}

template <typename T>
void iter(T* adress, size_t const len, void (*func)(T&))
{
	if (!adress || !func)
		return;
	for (size_t i = 0; i < len; i++)
		func(adress[i]);
}

template <typename U>
void iter(U const * adress, size_t const len, void (*func)(U const &))
{
	if (!adress || !func)
		return;
	for (size_t i = 0; i < len; i++)
		func(adress[i]);
}