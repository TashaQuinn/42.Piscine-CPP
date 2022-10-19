/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 00:44:15 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    
    type = "Dog";
    std::cout << "Default constructor for Dog called" << std::endl;
    
}

Dog::Dog(Dog const &copy) : Animal(copy) {
    
    *this = copy;
    std::cout << "Copy constructor for Dog called" << std::endl;
    
}

Dog &Dog::operator=(Dog const &copy) {
    
    this->type = copy.type;
    std::cout << "Assignement operator called" << std::endl;    
    return *this;
    
}
    
Dog::~Dog() {
    
    std::cout << "Destructor for Dog called" << std::endl;
    
}

/*.....................................................................*/

void Dog::makeSound() {
    
    std::cout << "BARK!" << std::endl;
    
}