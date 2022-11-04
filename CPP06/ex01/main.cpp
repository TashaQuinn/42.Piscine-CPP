/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:36:39 by jbania            #+#    #+#             */
/*   Updated: 2022/11/02 04:47:15 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef	struct s_Data {
	
	std::string	string;
	char c;
	int	i;
	float f;
	double d;

}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int	main() {
	
	Data *myData = new Data;
	uintptr_t rawData;

	myData->string = "Russia";
	myData->c = 'U';
	myData->i = 666;
	myData->f = 24.02f;
	myData->d = 2022.0;
	
	std::cout << "string: " << myData->string << std::endl;
	std::cout << "char: " << myData->c << std::endl;
	std::cout << "int: " << myData->i << std::endl;
	std::cout << "float: " << myData->f << std::endl;
	std::cout << "double: " << myData->d << std::endl;
	std::cout << "Pointer to data structure before serialization: " << &myData << std::endl;
	
	rawData = serialize(myData);

	std::cout << std::endl;

	myData = deserialize(rawData);
	
	std::cout << "string: " << myData->string << std::endl;
	std::cout << "char: " << myData->c << std::endl;
	std::cout << "int: " << myData->i << std::endl;
	std::cout << "float: " << myData->f << std::endl;
	std::cout << "double: " << myData->d << std::endl;
	std::cout << "Pointer to data structure after deserialization: " << &myData << std::endl;
	
	delete myData;
	
	return 0;
	
}

uintptr_t serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));

}

Data* deserialize(uintptr_t raw) {
	
	return (reinterpret_cast<Data *>(raw));

}