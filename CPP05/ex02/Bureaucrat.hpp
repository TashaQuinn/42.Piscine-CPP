/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:10:03 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 22:20:02 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	
	const std::string _name;
	int _grade;
	
public:

	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const &copy);

	const std::string getName() const;
	int getGrade() const;
	void signForm(Form &sign);
	void executeForm(Form const &form);
	
	void checkGrade() const;
	int decrGrade();
	int incrGrade();

	static const int lowestGrade = 150, highestGrade = 1;

	class GradeTooLowException: public std::exception { public: const char * what() const throw(); };
	class GradeTooHighException: public std::exception { public: const char * what() const throw(); };
	
};

std::ostream &operator<<(std::ostream &outputObj, Bureaucrat const &inst);

#endif 