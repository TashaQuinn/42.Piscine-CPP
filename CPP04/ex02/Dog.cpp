/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 08:00:48 by jbania           ###   ########.fr       */
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
        if (_brain)
            delete _brain;
        _brain = new Brain(*copy._brain);
    }
    
    type = copy.type;
    std::cout << "Assignement operator called" << std::endl;    
    return *this;
    
}
    
Dog::~Dog() {
    
    delete _brain;
    std::cout << "Destructor for Dog called" << std::endl;
    
}


/*__________________________________________________________________________*/


void Dog::makeSound() const {
    
    std::cout << "BARK!" << std::endl;
    
}

Brain *Dog::getBrain() {
    
    return (this->_brain);
    
}