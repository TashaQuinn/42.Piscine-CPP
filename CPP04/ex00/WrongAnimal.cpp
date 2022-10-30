/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/30 08:08:18 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    
    std::cout << "Default constructor for WrongAnimal called" << std::endl;
    
}


WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
    
    *this = copy;
    std::cout << "Copy constructor for WrongAnimal called" << std::endl;
    
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy) {
    
    this->type = copy.type;
    std::cout << "Assignement operator called" << std::endl;
    return *this;
    
}
    
WrongAnimal::~WrongAnimal() {
    
    std::cout << "Destructor for WrongAnimal called" << std::endl;
    
}

std::ostream &operator<<(std::ostream &outputObj, WrongAnimal const &inst) {
    
	outputObj << "WrongAnimal " << inst.getType();
	return outputObj;
    
}


/*__________________________________________________________________________*/


std::string WrongAnimal::getType() const {

    return this->type;
    
}

void WrongAnimal::makeSound() {
    
    std::cout << "*SOME WRONG ANIMAL SOUND*" << std::endl;
    
}