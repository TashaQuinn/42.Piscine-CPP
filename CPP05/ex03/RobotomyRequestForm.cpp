/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:12:45 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 07:54:01 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), _target("target") {}
 
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {

    Form::operator=(copy);
    return *this;
    
}

RobotomyRequestForm::~RobotomyRequestForm() {}


/*___________________________________________________________________________________________________________________________________*/


void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    
    if (getSigned()) {
        
		if (executor.getGrade() <= this->getExecuteGrade()) {
			srand(time(NULL));
			if (std::rand() % 2)
				std::cout << this->_target << " has been robotomized successfully." << std::endl;
			else
				std::cout << "Robotomy has failed." << std::endl;
		}
		else
			throw Form::GradeTooLowException();	
	}
    
	else
		throw FormNotSignedException();

}