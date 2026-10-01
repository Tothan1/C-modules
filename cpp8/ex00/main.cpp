/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:00:55 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/10/01 12:39:55 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main( void ) {

    std::cout << "---Test Vector" << '\n';
    std::vector <int> vector1;
    vector1.push_back(0);
    vector1.push_back(1);
    vector1.push_back(2);
    try
    {
        easyfind(vector1, 0);
        easyfind(vector1, 1);
        easyfind(vector1, 2);
        easyfind(vector1, 3);
    }
    catch(const std::string& e)
    {
        std::cerr << e << '\n';
    }
    std::cout << "---Test list" << '\n';
    std::list <int> lst1;
    lst1.push_back(0);
    lst1.push_back(1);
    lst1.push_back(2);
    try
    {
        easyfind(lst1, 0);
        easyfind(lst1, 1);
        easyfind(lst1, 2);
        easyfind(lst1, 3);
    }
    catch(const std::string& e)
    {
        std::cerr << e << '\n';
    }

    std::cout << "---Test deque" << '\n';
    std::deque <int> deque1;
    deque1.push_back(0);
    deque1.push_back(1);
    deque1.push_back(2);
    try
    {
        easyfind(deque1, 0);
        easyfind(deque1, 1);
        easyfind(deque1, 2);
        easyfind(deque1, 3);
    }
    catch(const std::string& e)
    {
        std::cerr << e << '\n';
    }
    
    return 0;
}