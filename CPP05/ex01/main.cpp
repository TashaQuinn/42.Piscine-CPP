/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:00 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 22:33:38 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    
    std::cout << "TESTING FORM DEFAULT CONSTRUCTOR" << std::endl;
    std::cout << std::endl;
    
    Form form;
    std::cout << form << std::endl;

    std::cout << "____________________________________________________________________" << std::endl;
    
    std::cout << std::endl;
    std::cout << "TESTING FORM CONSTRUCTOR" << std::endl;
    std::cout << std::endl;
    
    try {
        Form form("Test form", -10, 10); //name, reqGradeToSign < 1, reqGradeToExecute > 1
        std::cout << form << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "____________________________________________________________________" << std::endl;
    
    std::cout << std::endl;
    std::cout << "TRYING TO SIGN A FORM" << std::endl;
    std::cout << std::endl;
    
    try {
        Form contract("irrelevant contract", 10, 10); //name, reqGradeToSign > 1, reqGradeToExecute > 1
        Bureaucrat amatilda("Amatilda", 1);
        std::cout << amatilda << std::endl;
        amatilda.signForm(contract);
        std::cout << contract;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
     
    std::cout << "____________________________________________________________________" << std::endl;
    
    std::cout << std::endl;
    std::cout << "TRYING TO SIGN A FORM WITH A LOW-GRADED \"BUREAUCRAT\"" << std::endl;
    std::cout << std::endl;
    
    try {
        Form agenda("agenda", 99, 99); //name, reqGradeToSign > 1, reqGradeToExecute > 1
        Bureaucrat recruit("Potential recruit", 100);
        recruit.signForm(agenda);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;

    return 0;
    
}