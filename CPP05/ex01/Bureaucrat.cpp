/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:32 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:10:56 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Hermes Conrad"), _grade(34)
{
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
	checkGrade();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		_grade = rhs._grade;
		checkGrade();
	}
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

const int &Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incGrade(const int n)
{
	_grade -= n;
	checkGrade();
}

void Bureaucrat::decGrade(const int n)
{
	_grade+= n;
	checkGrade();
}

void Bureaucrat::signForm(Form &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << _name << " couldn't sign " << form.getName()
        << " because grade is not high enough" << std::endl;
    }

}

void Bureaucrat::checkGrade() const
{
	if (_grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Sweet gorilla of Manila, grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Sweet gorilla of Manila, grade is too low!");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}