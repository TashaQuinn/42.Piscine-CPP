/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 04:18:20 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    
    type = "Dog";
    _brain = new Brain();
    std::cout << "Default constructor for Dog called" << std::endl;
    
}

Dog::Dog(Dog const &copy) : Animal(copy) {
    
    type = copy.type;
    _brain = new Brain(*copy._brain);
    std::cout << "Copy constructor for Dog called" << std::endl;
    
}

Dog &Dog::operator=(Dog const &copy) {
    
    if (this != &copy)
    {
        Animal::operator=(copy);//
        if (_brain)
            delete _brain;//
        _brain = new Brain(*copy._brain);//
    }
    
    type = copy.type;
    std::cout << "Assignement operator called" << std::endl;    
    return *this;
    
}
    
Dog::~Dog() {
    
    delete _brain;//?
    std::cout << "Destructor for Dog called" << std::endl;
    
}

/*.....................................................................*/

void Dog::makeSound() {
    
    std::cout << "BARK!" << std::endl;
    
}