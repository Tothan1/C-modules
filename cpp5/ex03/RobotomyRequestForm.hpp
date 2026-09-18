/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:59 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 19:32:18 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
class RobotomyRequestForm: public AForm
{
private:
	std::string _target;
public:
//Form Canonical
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
	~RobotomyRequestForm();
//Other
	RobotomyRequestForm(std::string target);
	virtual void executeAction(void)const;
};

