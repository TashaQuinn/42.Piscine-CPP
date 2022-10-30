/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:10:19 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 07:59:51 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
 
Bureaucrat::Bureaucrat() : _name("Lord of papers"), _grade(1) {}

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

/*_____________________________________________________________________________________________*/


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