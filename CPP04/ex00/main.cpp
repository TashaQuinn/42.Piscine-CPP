/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:41:30 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 04:49:11 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define DEFAULT "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    
    Animal* animal = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    WrongAnimal* wrongAnimal = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << std::endl;
    
    std::cout << GREEN << "Animal: " << animal->getType() << " " << DEFAULT << std::endl; 
    animal->makeSound();
    std::cout << std::endl;
    
    std::cout << GREEN << "Cat: " << cat->getType() << " " << DEFAULT << std::endl;
    cat->makeSound();
    std::cout << std::endl;
    
    std::cout << GREEN << "Dog: " << dog->getType() << " " << DEFAULT << std::endl;
    dog->makeSound();
    std::cout << std::endl;

    std::cout << RED << "WrongAnimal: " << wrongAnimal->getType() << " " << DEFAULT << std::endl; 
    wrongAnimal->makeSound();
    std::cout << std::endl;
    
    std::cout << RED << "WrongCat: " << wrongCat->getType() << " " << DEFAULT << std::endl;
    wrongCat->makeSound();
    std::cout << std::endl;
    
    delete animal;
    delete cat;
    delete dog;
    delete wrongAnimal;
    delete wrongCat;
    
    return 0;
    
}