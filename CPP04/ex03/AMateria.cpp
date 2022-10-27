/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:19:10 by jbania            #+#    #+#             */
/*   Updated: 2022/10/24 23:59:40 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &copy) {
    
    *this = copy;
    
}

AMateria &AMateria::operator=(AMateria const &copy) {
    
    this->_type = copy._type;
    return *this;
    
}

std::string const &AMateria::getType() const {
    
    return this->_type;
    
}