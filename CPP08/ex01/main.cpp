/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:18:33 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 21:03:17 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main() {
	
	{
		std::cout << "Creating Span object with one element..." << std::endl;
		Span sp = Span(1);
		sp.addNumber(INT_MAX);
		
		std::cout << "Printing Span object:" << std::endl;
		sp.printElements();

		std::cout << "Trying to get spans..." << std::endl;
		try {
			std::cout << "Span: " << sp.shortestSpan() << "\n";
		}
		catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		try {
			std::cout << "Span: " << sp.longestSpan() << "\n";
		}
		catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		std::cout << "Trying to add new element..." << std::endl;
		try {
			sp.addNumber(INT_MIN);
			std::cout << "Number: " << INT_MIN << " added to container\n";
		}
			catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}
		
	}

	std::cout << "_________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	{
		std::cout << "Creating Span object with one element..." << std::endl;
		Span sp = Span(3);
		sp.addNumber(INT_MAX);

		std::cout << "Trying to add new element..." << std::endl;
		try {
			sp.addNumber(4242);
			std::cout << "Number: " << 4242 << " added to container\n";
		}
			catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		std::cout << "Trying to add new element..." << std::endl;
		try {
			sp.addNumber(INT_MIN);
			std::cout << "Number: " << INT_MIN << " added to container\n";
		}
			catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		std::cout << "Printing Span object:" << std::endl;
		sp.printElements();

		std::cout << "Trying to get spans..." << std::endl;
		try {
			std::cout << "Span: " << sp.shortestSpan() << "\n";
		}
		catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		try {
			std::cout << "Span: " << sp.longestSpan() << "\n";
		}
		catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}
		
		std::cout << "Trying to add new element..." << std::endl;
		try {
			sp.addNumber(INT_MIN);
			std::cout << "Number: " << INT_MIN << " added to container\n";
		}
			catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}
		
	}
	
	std::cout << "_________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	{
		std::cout << "Creating Span object with random numbers..." << std::endl;
		Span sp = Span(10001);
		sp.randomFill();

		std::cout << "Trying to get spans..." << std::endl;
		try {
			std::cout << "Span: " << sp.shortestSpan() << "\n";
		}
		catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		try {
			std::cout << "Span: " << sp.longestSpan() << "\n";
		}
		catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}

		std::cout << "Trying to add new element..." << std::endl;
		try {
			sp.addNumber(1);
			std::cout << "Number: " << 1 << " added to container\n";
		}
			catch (std::exception & error) {
			std::cerr << error.what() << std::endl;
		}
		
	}

	std::cout << "_________________________________________________________________________" << std::endl;
	std::cout << std::endl;

	std::cout << "Test from subject" << std::endl;
	Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

}