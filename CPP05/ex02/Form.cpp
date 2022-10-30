/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:43 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 07:57:22 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Paper"), _isSigned(false), _reqGradeToSign(lowestGrade), _reqGradeToExecute(lowestGrade) {
        
}

Form::Form(const std::string name, const int reqGradeToSign, const int reqGradeToExecute)
    : _name(name), _reqGradeToSign(reqGradeToSign), _reqGradeToExecute(reqGradeToExecute) {
    
    checkGrade();
    this->_isSigned = false;
    
}

Form::Form(Form const &copy) : _name(copy._name), _reqGradeToSign(copy._reqGradeToSign), _reqGradeToExecute(copy._reqGradeToExecute){
    
    *this = copy; 
        
}

Form::~Form() {}

Form &Form::operator=(Form const &copy) {

    if (this->_isSigned == copy._isSigned)
        return (*this);
    return (*this);
    
}

const std::string Form::getName() const {

    return this->_name;
    
}


bool Form::getSigned() const {
    
    return this->_isSigned;
    
}

int Form::getSignGrade() const {
    
    return this->_reqGradeToSign;
    
}


int Form::getExecuteGrade() const {
    
    return this->_reqGradeToExecute;
    
}

std::ostream & operator<<(std::ostream &outputObj, Form const &inst) {
    
    outputObj << inst.getName() << ", grade to sign = " << inst.getSignGrade()
    << ", grade to execute = " << inst.getExecuteGrade();
    
    std::cout << std::endl;
    
    if (inst.getSigned())
        std::cout << "Form was signed";
    else
        std::cout << "Form was not signed";

    std::cout << std::endl;
    
    return outputObj;
    
}
 
void Form::beSigned(Bureaucrat &brc) {

    if (brc.getGrade() > this->_reqGradeToSign)
        throw GradeTooLowException();
    this->_isSigned = true;
    
}

void Form::checkGrade() const {
    
	if ((this->_reqGradeToSign < this->highestGrade) || (this->_reqGradeToExecute < this->highestGrade))
		throw Bureaucrat::GradeTooHighException();
	else if ((this->_reqGradeToSign > this->lowestGrade) || (this->_reqGradeToExecute > this->lowestGrade))
		throw Bureaucrat::GradeTooLowException();
	
}

const char *Form::GradeTooHighException::what() const throw() {
    
    return "Sweet gorilla of Manila, grade is too high!";
    
}

const char *Form::GradeTooLowException::what() const throw() {
    
    return "Sweet gorilla of Manila, grade is too low!";

}

const char *Form::FormNotSignedException::what() const throw() {
    
    return "Form should be signed first";

}