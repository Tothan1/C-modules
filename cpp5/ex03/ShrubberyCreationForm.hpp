/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:59 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/18 11:20:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
class ShrubberyCreationForm: public AForm
{
private:
	std::string _target;
public:
//Form Canonical
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();
//Other
	ShrubberyCreationForm(std::string target);
	virtual void executeAction(void)const;
};

