/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:41:30 by jbania            #+#    #+#             */
/*   Updated: 2022/10/24 22:27:11 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    
    std::cout << "Animal: " << animal->getType() << " " << std::endl; 
    animal->makeSound();
    std::cout << std::endl;
    
    std::cout << "Cat: " << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << std::endl;
    
    std::cout << "Dog: " << dog->getType() << " " << std::endl;
    dog->makeSound();
    std::cout << std::endl;

    std::cout << "WrongAnimal: " << wrongAnimal->getType() << " " << std::endl; 
    wrongAnimal->makeSound();
    std::cout << std::endl;
    
    std::cout << "WrongCat: " << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();
    std::cout << std::endl;
    
    delete animal;
    delete cat;
    delete dog;
    delete wrongAnimal;
    delete wrongCat;
    
    return 0;
    
}