/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:13:08 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 07:53:50 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
 
ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), _target("target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    
    Form::operator=(copy);
    return *this;
    
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


/*___________________________________________________________________________________________________________________________________*/


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    
    if (getSigned()) {
        
		if (executor.getGrade() <= this->getExecuteGrade()) {  
		    std::fstream treeFile;
            treeFile.open("EcoEnthusiast_shrubbery", std::fstream::out | std::fstream::trunc);
            if (!treeFile.is_open() || treeFile.bad())
                throw ShrubberyCreationForm::FileCreationError();
            treeFile << "             _-_                   _-_\n"
                        "          /~~   ~~\\             /~~   ~~\\\n"
                        "       /~~  o   o  ~~\\       /~~  o   o  ~~\\\n"
                        "      {   o   O   o   }     {   o   O   o   }\n"
                        "       \\  _-     -_  /       \\  _-     -_  /\n"
                        "        ~   \\\\ //  ~        ~     \\\\ //  ~\n"
                        "      _- -   | | _- _      _- -    | | _- _\n"
                        "      _- -   | | _- _      _- -    | | _- _\n"
                        "            // \\\\                 // \\\\\n" 
                        "  _- _    .         |\\   .    _ -_           -_ \n"
                    "        ___________/  \\____________       \n"
                    "       /  Why is it, when you want \\      \n"
                    "       |  something, it is so damn   |         \n"
                    "       |    much work to get it?     |         \n"
                    "       \\___________________________/      \n" << std::endl;
            treeFile.close();
            treeFile.close();
            std::cout << "Shrubbery created." << std::endl;
        }
		else
			throw Form::GradeTooLowException();	
	}
    
	else
		throw FormNotSignedException();

}

const char* ShrubberyCreationForm::FileCreationError::what() const throw() {
    
    return ("A problem occured while creating the file");
    
}