/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 06:55:23 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 07:56:08 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), _target("target") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {

    Form::operator=(copy);
    return *this;
    
}
 
PresidentialPardonForm::~PresidentialPardonForm() {} 


/*___________________________________________________________________________________________________________________________________*/


void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    
    if (getSigned()) {
        
		if (executor.getGrade() <= this->getExecuteGrade())
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		else
			throw Form::GradeTooLowException();	
	}
    
	else
		throw FormNotSignedException();

}