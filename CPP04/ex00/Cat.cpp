/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 00:44:04 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    
    type = "Cat";
    std::cout << "Default constructor for Cat called" << std::endl;
    
}

Cat::Cat(Cat const &copy) : Animal(copy) {
    
    *this = copy;
    std::cout << "Copy constructor for Cat called" << std::endl;
    
}

Cat &Cat::operator=(Cat const &copy) {
    
    this->type = copy.type;
    std::cout << "Assignement operator called" << std::endl;    
    return *this;
    
}
    
Cat::~Cat() {
    
    std::cout << "Destructor for Cat called" << std::endl;
    
}

/*.....................................................................*/

void Cat::makeSound() {
    
    std::cout << "MEOW!" << std::endl;
    
}