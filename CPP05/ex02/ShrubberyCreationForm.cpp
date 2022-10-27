/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:13:08 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:13:09 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form::Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : Form::Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
    : Form::Form(rhs), _target(rhs._target)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (getiIsSigned() && executor.getGrade() <= getGradeToExecute())
    {
        std::ofstream os;
        os.open(_target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
        os << "       _-_\n"
              "    /~~   ~~\\\n"
              " /~~         ~~\\\n"
              "{               }\n"
              " \\  _-     -_  /\n"
              "   ~  \\\\ //  ~\n"
              "_- -   | | _- _\n"
              "  _ -  | |   -_\n"
              "      // \\\\" << std::endl;
        std::cout << "Create shrubbery" << std::endl;
    }
    else
    {
        std::cerr << executor.getName() << " ";
        throw Form::CantExecuteForm();
    }
}