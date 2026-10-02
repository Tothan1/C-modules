/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:00:55 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/10/02 13:12:12 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    std::srand (time(NULL));
    std::cout << "---Test Subject----"<< std::endl;
    try
    {
        Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout<< std::endl << "---Test Add span more N----"<< std::endl;
    try
    {
        Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(42);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout<< std::endl << "---Test short and long span with size == 1----"<< std::endl;
    try
    {
        Span sp = Span(5);
    sp.addNumber(6);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout<< std::endl << "---Test short and long span with size == 2----"<< std::endl;
    try
    {
        Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(9);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout<< std::endl << "---Test insert vector----"<< std::endl;
    try
    {
        Span sp = Span(3);

        std::vector<int> tab;
        tab.push_back(1);
        tab.push_back(2);
        tab.push_back(3);
        sp.addNumber(tab.begin(), tab.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    std::cout<< std::endl << "---Test insert vector Overflow----"<< std::endl;
    try
    {
        Span sp = Span(2);

        std::vector<int> tab;
        tab.push_back(1);
        tab.push_back(2);
        tab.push_back(3);
        sp.addNumber(tab.begin(), tab.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout<< std::endl << "---Test with big numbers ----"<< std::endl;
    try
    {
        Span sp = Span(10000);

        std::vector<int> tab;
        for (size_t i = 0; i < 10000; i++)
            tab.push_back(rand());
        sp.addNumber(tab.begin(), tab.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}