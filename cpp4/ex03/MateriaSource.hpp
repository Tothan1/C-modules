/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:48:03 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 10:48:43 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"
#ifndef MaterialSource_H
#define MaterialSource_H

class MateriaSource : public IMateriaSource
{
	private:
		int _nb_materia;
		AMateria _slots[4];
	public:
	//Form canonical
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & src);
		~MateriaSource();
};

#endif
