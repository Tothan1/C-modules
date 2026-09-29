/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:00:55 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/29 13:37:07 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstddef>

void print_int(int const &adress)
{
	std::cout << adress;
}
int main( void )
{
    std::cout << "test increment any type array" << std::endl;

    char tab_char[] = {'a', 'b', 'c', 'd'};
    int tab_int[] = {1, 2, 3, 4};
    iter(tab_int,  4, increment);
    iter(tab_char,  4, increment);

    for (int i = 0; i < 4; i++)
        std::cout << tab_char[i] << " , ";
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
        std::cout << tab_int[i] << " , ";
    std::cout << std::endl;

    
    std::cout << "test const array" << std::endl;
    int const tab_int_const[] = {1, 2, 3, 4};
    iter(tab_int_const, 4, print_generique);
    std::cout << std::endl;
    iter(tab_int, 4, print_generique);
    std::cout << std::endl;


    std::cout << "test function no generique" << std::endl;
    iter(tab_int_const, 4, print_int);
    std::cout << std::endl;
    iter(tab_int, 4, print_int);
}