/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:41:30 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 21:31:28 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    //Animal* animal = new Animal(); //check abstract class instantiation
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    
    std::cout << std::endl;
    
    std::cout << "Cat: " << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << std::endl;
    
    std::cout << "Dog: " << dog->getType() << " " << std::endl;
    dog->makeSound();
    std::cout << std::endl;
    
    delete cat;
    delete dog;
    
    return 0;
    
}