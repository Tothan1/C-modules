/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:55:53 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/29 11:21:44 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename A>
A max(const A& a, const A& b)
{
	if(a<=b)
		return b;
	else
		return a;
}

template <typename B>
B min(const B& a, const B& b)
{
	if(a>=b)
		return b;
	else
		return a;
}

template <typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}