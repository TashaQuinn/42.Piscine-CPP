/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:41:30 by jbania            #+#    #+#             */
/*   Updated: 2022/10/24 22:27:48 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

int main() {
    
    int nbrObjs;
    std::string input;
    
    while (1) {
        
        std::cout << "Please enter the number of animals to be created: " << std::endl;
        getline(std::cin, input);
        nbrObjs = atoi(input.c_str());

        if (nbrObjs < 1)
            std::cout << "The number should be no less than 0." << std::endl;
        else
            break;
    }
    
    std::cout << std::endl;
    
    Animal* animalArray[nbrObjs]; 
    
    for (int i = 1; i <= nbrObjs; i++) {
        std::cout << "Number of the created animal: " << i << std::endl;
        if (i % 2) {
            animalArray[i] = new Cat();
        } 
        else {
            animalArray[i] = new Dog();
        }
    }
    
    std::cout << std::endl;
        
    for (int i = 1; i <= nbrObjs; i++) {
        std::cout << "Number of the deleted animal: " << i << std::endl;
        delete animalArray[i];
    }
    
    return 0;
    
}