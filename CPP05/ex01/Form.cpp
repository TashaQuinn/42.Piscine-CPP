/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:43 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:09:44 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
    : _name("default"), _isSigned(false), _gradeToSign(Form::lowestGrade), \
     _gradeToExecute(Form::lowestGrade)
    {
        checkGrade();
    }

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
    {
        checkGrade();
    }

Form::Form(Form const &src)
    : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
    {
        checkGrade();
    }

Form::~Form()
{
}

Form &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        _isSigned = rhs._isSigned;
        checkGrade();
    }
    return *this;
}

const std::string &Form::getName() const 
{
    return _name;
}

bool Form::getiIsSigned() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::beSigned(Bureaucrat const &rhs)
{
    if (rhs.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

void Form::checkGrade() const 
{
    if (_gradeToSign < Form::highestGrade || _gradeToExecute < Form::highestGrade)
        throw Form::GradeTooHighException();
    else if (_gradeToSign > Form::lowestGrade || _gradeToExecute > Form::lowestGrade)
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &os, Form const &rhs)
{
    os << rhs.getName() << ", grade to sign = " << rhs.getGradeToSign()
    << " grade to execute = " << rhs.getGradeToExecute();

    if (rhs.getiIsSigned())
        std::cout << "\nForm signed";
    else
        std::cout << "\nForm not signed";
    return os;
}