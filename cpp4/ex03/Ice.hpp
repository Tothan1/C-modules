/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:10:31 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 17:12:52 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex03.hpp"

class Ice : public AMateria
{
	protected:
		std::string type;
	public:
		//Form canonical
		Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & src);
		~Ice();
		//Other
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};