/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:39:37 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 21:04:00 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main() {
    
	std::vector<int> int_vector(10);
	std::list<int> int_list;
    const int n = 10;
	
	std::cout << "Populating int vector and int list numbers..." << std::endl;
	for (int i = 0; i < n; i++)
		int_vector[i] = i;
	for (int i = 0; i < n; i++)
		int_list.push_back(i);
	
	std::cout << "________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Printing int vector:" << std::endl;
	int_vector.push_back(42);
	std::copy(int_vector.begin(), int_vector.end(), std::ostream_iterator<int>(std::cout, " "));
	
	std::cout << std::endl;
	std::cout << "________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Trying to find number 100 in int vector..." << std::endl;
	try {
		std::vector<int>::iterator it = easyFind(int_vector, 100);
		std::cout << "Found element at index: " << it - int_vector.begin() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Trying to find number 42 in int vector..." << std::endl;
	try {
		std::vector<int>::iterator it = easyFind(int_vector, 42);
		std::cout << "Found element at index: " << it - int_vector.begin() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Printing int list:" << std::endl;
	int_list.push_back(42);
	std::copy(int_list.begin(), int_list.end(), std::ostream_iterator<int>(std::cout, " "));
	
	std::cout << std::endl;
	std::cout << "________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Trying to find number 100 in int list..." << std::endl;
	try {
		std::list<int>::iterator it = easyFind(int_list, 100);
		std::cout << "Found element at index: " << std::distance(int_list.begin(), it) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Trying to find number 42 in int list..." << std::endl;
	try {
		std::list<int>::iterator it = easyFind(int_list, 42);
		std::cout << "Found element at index: " << std::distance(int_list.begin(), it) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

}