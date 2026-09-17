/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:59 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 19:32:18 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
class PresidentialPardonForm: public AForm
{
private:
	std::string _target;
public:
//Form Canonical
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
	~PresidentialPardonForm();
//Other
	PresidentialPardonForm(std::string target);
	virtual void execute(Bureaucrat const & executor);
};

