/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:25:51 by jbania            #+#    #+#             */
/*   Updated: 2022/11/07 17:26:10 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

# define MAX_VAL 750

static void	print_text(std::string output);

int main(int, char**) {
    
	print_text("Creating two arrays...");
	Array<int> numbers(MAX_VAL);
	Array<int> empty_array;
	int	* mirror = new int[MAX_VAL];

	std::cout << "_____________________________________________________" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Size of the empty array: " << empty_array.size() << std::endl;
	try {
		std::cout << "Accessing empty array: " << empty_array[0] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "_____________________________________________________" << std::endl;
	
	std::cout << "\nSize of the big array: " << numbers.size() << std::endl;
	std::cout << "Value of the element with the index of 5: " << numbers[5] << std::endl;

	std::cout << "_____________________________________________________" << std::endl;
	
	print_text("Assigning random numbers to arrays...");
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "Value of the element of numbers[5]: " << numbers[5] << std::endl;
	std::cout << "Value of the element of mirror[5]: " << mirror[5] << std::endl;

	std::cout << "_____________________________________________________" << std::endl;
	
	print_text("Testing assignment operator and copy constructor...");
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	std::cout << "_____________________________________________________" << std::endl;

	print_text("Comparing values");
	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return (1);
		}
	}

	std::cout << "_____________________________________________________" << std::endl;

	print_text("Trying to access index out of bounds - negative number...");
	try {
		numbers[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "_____________________________________________________" << std::endl;
	
	print_text("Trying to access index out of bounds - 750...");
	try {
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "_____________________________________________________" << std::endl;
	
	print_text("Trying to access the max valid index of the array - 749...");
	try {
		numbers[749] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	


	std::cout << "_____________________________________________________" << std::endl;

	print_text("Assigning other random numbers for array...");
	std::cout << "Previous value of the element of numbers[5]: " << numbers[5] << std::endl;
	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	std::cout << "New value of the element of numbers[5]: " << numbers[5] << std::endl;

	std::cout << "_____________________________________________________" << std::endl;

	print_text("Deleting arrays");
	delete [] mirror;

	return (0);

}

static void	print_text(std::string output) {

	std::cout << "\n" << output << "\n";
    
}