/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:20:59 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 13:05:34 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointNum = 0;
    
}

Fixed::Fixed(Fixed const &copy) {
    
    std::cout << "Copy constructor called" << std::endl;
    //_fixedPointNum = copy._fixedPointNum;
    this->_fixedPointNum = copy.getRawBits();

}

Fixed &Fixed::operator=(Fixed const &copy) {
    
    std::cout << "Copy assignment operator called" << std::endl;
    //_fixedPointNum = copy._fixedPointNum;
    this->_fixedPointNum = copy.getRawBits();
    return *this;
    
}
    
Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
    
}
    
int Fixed::getRawBits() const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointNum);
    
}

void Fixed::setRawBits(int const raw) {
    
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNum = raw;
    
}
    