/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:41:04 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 06:27:07 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    
    _type = "cure";

}

Ice::Ice(std::string const &type) {
    
   _type = "ice";

}

Ice::Ice(Ice const &copy) {
    
    *this = copy;
    
}

Ice &Ice::operator=(Ice const &copy) {
    
    this->_type = copy._type;
    return *this;
    
}

Ice::~Ice() {}

AMateria *Ice::clone() const{
    
    return (new Ice(*this));

}

void Ice::use(ICharacter &target) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    
}