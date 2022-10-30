/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:08:53 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 07:48:48 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "SUCCESSFULL FORMS EXECUTION" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test #1:" << std::endl;
    try {
        ShrubberyCreationForm	shrubberyForm("Shrubbery");
        Bureaucrat				ecoEnthusiast("EcoEnthusiast", 77);

        std::cout << "Form Name: " << shrubberyForm.getName() << std::endl;
        std::cout << "Grade to Sign: " << shrubberyForm.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << shrubberyForm.getExecuteGrade() << std::endl;
        shrubberyForm.beSigned(ecoEnthusiast);
        std::cout << ecoEnthusiast << std::endl;
        shrubberyForm.execute(ecoEnthusiast);
        ecoEnthusiast.executeForm(shrubberyForm);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    std::cout << "Test #2:" << std::endl;
    try {
        RobotomyRequestForm		testObject("Marty");
        Bureaucrat				madScientist("Dr.Brown", 7);

        std::cout << "Form Name: " << testObject.getName() << std::endl;
        std::cout << "Grade to Sign: " << testObject.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << testObject.getExecuteGrade() << std::endl;
        testObject.beSigned(madScientist);
        std::cout << madScientist << std::endl;
        testObject.execute(madScientist);
        madScientist.executeForm(testObject);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    std::cout << "Test #3:" << std::endl;
    try {
        PresidentialPardonForm		coder("Serial coder");
        Bureaucrat					worldPresident("World President", 2);

        std::cout << "Form Name: " << coder.getName() << std::endl;
        std::cout << "Grade to Sign: " << coder.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << coder.getExecuteGrade() << std::endl;
        coder.beSigned(worldPresident);
        std::cout << worldPresident << std::endl;
        coder.execute(worldPresident);
        worldPresident.executeForm(coder);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "____________________________________________________________________" << std::endl;
    
    std::cout << std::endl;
    std::cout << "LOW-GRADED BUREAUCRAT FORMS EXECUTION" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test #1:" << std::endl;
    try {
        ShrubberyCreationForm	shrubberyForm("Shrubbery");
        Bureaucrat				ecoEnthusiast("EcoEnthusiast", 140);

        std::cout << "Form Name: " << shrubberyForm.getName() << std::endl;
        std::cout << "Grade to Sign: " << shrubberyForm.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << shrubberyForm.getExecuteGrade() << std::endl;
        ecoEnthusiast.signForm(shrubberyForm);
        std::cout << ecoEnthusiast << std::endl;
        shrubberyForm.execute(ecoEnthusiast);
        ecoEnthusiast.executeForm(shrubberyForm);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;

    std::cout << "Test #2:" << std::endl;
    try {
        RobotomyRequestForm		testObject("Marty");
        Bureaucrat				madScientist("Dr.Brown", 46);

        std::cout << "Form Name: " << testObject.getName() << std::endl;
        std::cout << "Grade to Sign: " << testObject.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << testObject.getExecuteGrade() << std::endl;
        madScientist.signForm(testObject);
        std::cout << madScientist << std::endl;
        testObject.execute(madScientist);
        madScientist.executeForm(testObject);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    std::cout << "Test #3:" << std::endl;
    try {
        PresidentialPardonForm		coder("Serial coder");
        Bureaucrat					worldPresident("World President", 7);

        std::cout << "Form Name: " << coder.getName() << std::endl;
        std::cout << "Grade to Sign: " << coder.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << coder.getExecuteGrade() << std::endl;
        worldPresident.signForm(coder);
        std::cout << worldPresident << std::endl;
        coder.execute(worldPresident);
        worldPresident.executeForm(coder);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "____________________________________________________________________" << std::endl;
    
    std::cout << std::endl;
    std::cout << "FORMS EXECUTUION ERRORS" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test #1:" << std::endl;
    try {
        ShrubberyCreationForm	shrubberyForm("Shrubbery");
        Bureaucrat				ecoEnthusiast("EcoEnthusiast", 140);

        std::cout << "Form Name: " << shrubberyForm.getName() << std::endl;
        std::cout << "Grade to Sign: " << shrubberyForm.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << shrubberyForm.getExecuteGrade() << std::endl;
        std::cout << ecoEnthusiast << std::endl;
        shrubberyForm.execute(ecoEnthusiast);
        ecoEnthusiast.executeForm(shrubberyForm);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    std::cout << "Test #2:" << std::endl;
    try {
        RobotomyRequestForm		testObject("Marty");
        Bureaucrat				madScientist("Dr.Brown", 46);

        std::cout << "Form Name: " << testObject.getName() << std::endl;
        std::cout << "Grade to Sign: " << testObject.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << testObject.getExecuteGrade() << std::endl;
        std::cout << madScientist << std::endl;
        testObject.execute(madScientist);
        madScientist.executeForm(testObject);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    std::cout << "Test #3:" << std::endl;
    try {
        PresidentialPardonForm		coder("Serial coder");
        Bureaucrat					worldPresident("World President", 7);

        std::cout << "Form Name: " << coder.getName() << std::endl;
        std::cout << "Grade to Sign: " << coder.getSignGrade() << std::endl;
        std::cout << "Grade to Execute: " << coder.getExecuteGrade() << std::endl;
        std::cout << worldPresident << std::endl;
        coder.execute(worldPresident);
        worldPresident.executeForm(coder);
    }
    catch(const std::exception& e) {  
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    return 0;
     
}