/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:55:53 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/29 18:25:03 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <cstddef>
template <typename T>
class Array
{
private:
	T* tab;
	unsigned int _len_tab;
public:
	//Form Canonical
	Array() :_len_tab(0)
	{
		tab = new T[_len_tab]();
	}

	Array(Array const & src) :Array()
	{
		this->tab = src.tab;
		this->_len_tab = src._len_tab;
	}
	Array & operator=(Array const & src):Array()
	{
		if( &src == this)
			return *this;
		this->tab = src.tab;
		this->_len_tab = src._len_tab;
		return *this;
	}
	~Array()
	{
		delete [] tab;
	}
	//Other constructor
	Array(unsigned int len_tab):_len_tab(len_tab)
	{
		tab = new T[_len_tab]();
	}
	//function member return size of array
	int size() const
	{
		return _len_tab;
	}
	//Exception
	class Badindex : public std::exception 
	{
		char const * what() const throw()
		{
			return "Bad index";
		}	
	};
	//Operator
	T & operator[](int len)
	{
		if( len < 0 || len >= (int)_len_tab)
			throw Array::Badindex();
		return (tab[len]);
	}
};



