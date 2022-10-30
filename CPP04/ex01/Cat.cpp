/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 08:02:18 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    
    type = "Cat";
    _brain = new Brain();
    std::cout << "Default constructor for Cat called" << std::endl;
    
}

Cat::Cat(Cat const &copy) : Animal(copy) {
    
    type = copy.type;
    _brain = new Brain(*copy._brain);
    std::cout << "Copy constructor for Cat called" << std::endl;
    
}

Cat &Cat::operator=(Cat const &copy) {
    
    if (this != &copy)
    {
        if (_brain)
            delete _brain;
        _brain = new Brain(*copy._brain);
    }
    
    type = copy.type;
    std::cout << "Assignement operator called" << std::endl;    
    return *this;
    
}
    
Cat::~Cat() {
    
    delete _brain;
    std::cout << "Destructor for Cat called" << std::endl;
    
}


/*__________________________________________________________________________*/


void Cat::makeSound() {
    
    std::cout << "MEOW!" << std::endl;
    
}

Brain *Cat::getBrain() {
    
    return (this->_brain);
    
}