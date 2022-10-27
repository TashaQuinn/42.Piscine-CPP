/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:10:03 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:10:06 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
public:
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const &rhs);

	const std::string &getName() const;
	const int &getGrade() const;

	void incGrade(const int n);
	void decGrade(const int n);

class GradeTooHighException : public std::exception {
public:
	const char *what() const throw();
};

class GradeTooLowException : public std::exception {
public:
	const char *what() const throw();
};

private:
	Bureaucrat();
	const std::string _name;
	int _grade;

	static const int lowestGrade = 150;
	static const int highestGrade = 1;
	void checkGrade() const;

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif
