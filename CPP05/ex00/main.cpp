/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 06:54:53 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 21:43:35 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	
	std::cout << "TESTING BUREAUCRAT CONSTRUCTOR" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Test #1:" << std::endl;
	try {
		Bureaucrat lordOfPapers = Bureaucrat("Lord of papers", 0);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << std::endl;
	std::cout << "Test #2:" << std::endl;
	
	try {
		Bureaucrat lordOfPapers = Bureaucrat("Lord of papers", 151);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "____________________________________________________________________" << std::endl;
	
	std::cout << std::endl;
	std::cout << "TESTING INCREMENTATION" << std::endl;
	std::cout << std::endl;
	
	try {
		Bureaucrat lordOfPapers = Bureaucrat("Lord of papers", 1);
		std::cout << lordOfPapers << std::endl;
		lordOfPapers.incrGrade();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "____________________________________________________________________" << std::endl;
	
	std::cout << std::endl;
	std::cout << "TESTING DECREMENTATION" << std::endl;
	std::cout << std::endl;
	
	try {
		Bureaucrat lordOfPapers = Bureaucrat("Lord of papers", 150);
		std::cout << lordOfPapers << std::endl;
		lordOfPapers.decrGrade();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << std::endl;
	
	return 0;

}