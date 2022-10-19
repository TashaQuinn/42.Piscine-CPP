/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:41:30 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 04:47:24 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define DEFAULT "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"

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
            std::cout << RED << "The number should be no less than 0." << DEFAULT << std::endl;
        else
            break;
    }
    
    std::cout << std::endl;
    
    Animal* animalArray[nbrObjs]; 
    
    Animal* animalArray2[nbrObjs]; //check deep copy (assign.op.)
    animalArray[nbrObjs] = animalArray2[42]; //check deep copy (assign.op.)
    Animal* animal = new Animal(); //check deep copy (copy)
    animal->makeSound();//check deep copy (copy)
    
    for (int i = 1; i <= nbrObjs; i++) {
        std::cout   << GREEN << "Number of the created animal: " 
                    << i << DEFAULT << std::endl;
        if (i % 2) {
            animalArray[i] = new Cat();
        } 
        else {
            animalArray[i] = new Dog();
        }
    }
    
    std::cout << std::endl;
        
    for (int i = 1; i <= nbrObjs; i++) {
        std::cout   << RED << "Number of the deleted animal: " 
                    << i << DEFAULT << std::endl;
        delete animalArray[i];
    }
    
    return 0;
    
}