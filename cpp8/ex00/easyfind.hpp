/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:55:53 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/10/01 12:39:08 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <vector>
#include <iostream>
#include<exception>
#include <algorithm>
template <typename T> void easyfind(const T &tab, int to_find)
{
    typename T::const_iterator find = std::find(tab.begin(), tab.end(), to_find);
    if(find != tab.end())
        std::cout << "Value of "<< to_find << " is find occurence!" << std::endl;
    else
        throw std::string("No find occurence!");
}
