/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:40:59 by jbania            #+#    #+#             */
/*   Updated: 2022/10/24 23:57:49 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
    
    _type = "cure";

}

Cure::Cure(std::string const &type) {
    
    _type = "cure";

}

Cure::Cure(Cure const &copy) {
    
    *this = copy;
    
}

Cure &Cure::operator=(Cure const &copy) {
    
    this->_type = copy._type;
    return *this;
    
}

Cure::~Cure() {}

AMateria *Cure::clone() const {

    return (new Cure(*this));
    
}

void Cure::use(ICharacter &target) {
    
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    
}