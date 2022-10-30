/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 08:07:28 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    
    std::cout << "Default constructor for Animal called" << std::endl;
    
}

Animal::Animal(Animal const &copy) {
    
    *this = copy;
    std::cout << "Copy constructor for Animal called" << std::endl;
    
}

Animal &Animal::operator=(Animal const &copy) {
    
    this->type = copy.type;
    std::cout << "Assignement operator called" << std::endl;
    return *this;
    
}
    
Animal::~Animal() {
    
    std::cout << "Destructor for Animal called" << std::endl;
    
}

std::ostream &operator<<(std::ostream &outputObj, Animal const &inst) {
    
	outputObj << "Animal " << inst.getType();
	return outputObj;
    
}


/*__________________________________________________________________________*/


std::string Animal::getType() const {

    return this->type;
    
}

void Animal::makeSound() {
    
    std::cout << "*SOME ANIMAL SOUND*" << std::endl;
    
}