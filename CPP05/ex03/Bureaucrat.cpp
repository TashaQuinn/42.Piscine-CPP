/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:10:19 by jbania            #+#    #+#             */
/*   Updated: 2022/11/04 23:47:57 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Lord of papers"), _grade(10) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
	
	checkGrade();
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	
	*this = copy;

}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	
	this->_grade = copy._grade;
	return *this;
	
}

std::ostream &operator<<(std::ostream &outputObj, Bureaucrat const &inst) {
	
	outputObj << inst.getName() << ", bureaucrat grade " << inst.getGrade();
	return outputObj;
	
}

const std::string Bureaucrat::getName() const {

	return _name;
	
}

int Bureaucrat::getGrade() const {
	
	checkGrade();
	return _grade;
	
}

int Bureaucrat::incrGrade() {
	
	this->_grade--;
	checkGrade();
	std::cout << getName() << "'s grade after incrementation: " << this->_grade << std::endl;

	return this->_grade;
}

int Bureaucrat::decrGrade() {
	
	this->_grade++;
	checkGrade();
	std::cout << getName() << "'s grade after decrementation: " << this->_grade << std::endl;

	
	return this->_grade;

}


void Bureaucrat::checkGrade() const {
	
	if (this->_grade < this->highestGrade) 
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > this->lowestGrade) 
		throw Bureaucrat::GradeTooLowException();
		
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

    return "Sweet gorilla of Manila, grade is too high!";
	
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

    return "Sweet gorilla of Manila, grade is too low!";
	
}

void Bureaucrat::signForm(Form &form) {
	
	if (form.getSigned() == true) {
		std::cout << "The form cannot be signed twice" << std::endl;
		return ;
	}

	try {
		
		form.beSigned(*this);
	 	std::cout << getName() << " signed " << form.getName() << std::endl;
		
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << getName() << " couldn't sign " << form.getName() << ", because " << e.what() << std::endl;
		
	}
	
}

void Bureaucrat::executeForm(Form const &form) {
	
	if (this->_grade <= form.getExecuteGrade())
		std::cout << Bureaucrat::getName() << " executed " << form.getName() << std::endl;
		
}