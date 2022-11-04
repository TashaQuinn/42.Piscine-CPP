/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:43 by jbania            #+#    #+#             */
/*   Updated: 2022/11/04 23:50:28 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &copy) {
    
    *this = copy;
        
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &copy) {

    (void)copy;
    return *this;
    
}

/*_________________________________________________________________________________*/

Form *Intern::makeForm(std::string formName, std::string targetName) {

    int i;
    
    std::string forms[3] = { "ShrubberyCreationForm", 
                             "RobotomyRequestForm",
                             "PresidentialPardonForm" };

    for (i = 0; i < 3; i++) {
        
        if (forms[i] == formName)
            break;
            
    }
    
    switch (i) {
        
        case 0:
            std::cout << "Intern creates " << formName << std::endl;
            return (new ShrubberyCreationForm(targetName));
            break;
        case 1:
            std::cout << "Intern creates " << formName << std::endl;
            return (new RobotomyRequestForm(targetName));
            break;
        case 2:
            std::cout << "Intern creates " << formName << std::endl;
            return (new PresidentialPardonForm(targetName));
            break;
        default:
            std::cout << "Incorrect formName" << std::endl;
            break;
            
    }
    
    return NULL;
    
}