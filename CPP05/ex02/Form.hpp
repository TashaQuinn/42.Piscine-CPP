/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:11 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 22:50:05 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
 
class Bureaucrat;

class Form {
    
    const std::string _name;
    bool _isSigned;
    const int _reqGradeToSign, _reqGradeToExecute;

public:

    Form();
    Form(const std::string name, const int reqGradeToSign, const int reqGradeToExecute);
    Form(Form const &copy);
    Form &operator=(const Form &copy);
    ~Form();

    const std::string getName() const;
    void checkGrade() const;
    bool getSigned() const;
    int	getSignGrade() const;
    int	getExecuteGrade() const;
    void beSigned(Bureaucrat &currentGrade);
    
    virtual void execute(Bureaucrat const &executor) const = 0;
    
    static const int lowestGrade = 150, highestGrade = 1;
    
    class GradeTooLowException: public std::exception { public: const char * what() const throw(); };
    class GradeTooHighException: public std::exception { public: const char * what() const throw(); };
    class FormNotSignedException: public std::exception { public: const char * what() const throw(); };
    
};

std::ostream & operator<<(std::ostream &outputObj, Form const &inst);

#endif