/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:34:18 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 21:27:23 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::Weapon(std::string type) {
    
    this->_type = type;
    
}

Weapon::~Weapon() {
    
}

void Weapon::setType(std::string type) {

    this->_type = type;
    
}

const std::string &Weapon::getType() const {

    return (this->_type);
    
}