/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 07:39:45 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 23:40:04 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	
	Intern intern;
	Bureaucrat paperBoss("Lord of Papers", 1);
	Form *form = NULL;

	form = intern.makeForm("ShrubberyCreationForm", "shrub");
	paperBoss.signForm(*form);
	paperBoss.executeForm(*form);
	delete(form);
	
	std::cout << "_____________________________________________________" << std::endl;
	std::cout << std::endl;
	
	form = intern.makeForm("RobotomyRequestForm", "Oscar XZ 2000");
	paperBoss.signForm(*form);
	paperBoss.executeForm(*form);
	delete(form);
	
	std::cout << "_____________________________________________________" << std::endl;
	std::cout << std::endl;
	
	form = intern.makeForm("PresidentialPardonForm", "serial coder");
	paperBoss.signForm(*form);
	paperBoss.executeForm(*form);
	delete(form);

	std::cout << "_____________________________________________________" << std::endl;
	std::cout << std::endl;
	
	form = intern.makeForm("Paper", "Lord of Papers");

    return 0;

}
