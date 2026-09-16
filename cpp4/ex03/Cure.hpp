/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:10:31 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 17:12:52 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex03.hpp"

class Cure : public AMateria
{
	protected:
		std::string type;
	public:
		//Form canonical
		Cure();
		Cure(Cure const & src);
		Cure & operator=(Cure const & src);
		~Cure();
		//Other
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};