/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:43:52 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 12:50:29 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointNum = 0;
    
}

Fixed::Fixed(Fixed const &copy) {
    
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointNum = copy.getRawBits();
    
}

Fixed &Fixed::operator=(Fixed const &copy) {
    
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointNum = copy.getRawBits();
    return *this;
    
}
    
Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
    
}

int Fixed::getRawBits() const {
    
    return (this->_fixedPointNum);
    
}

void Fixed::setRawBits(int const raw) {
    
    this->_fixedPointNum = raw;
    
}

/*.....................................................*/

Fixed::Fixed(const int num) {
    
    this->_fixedPointNum = num << this->_fractBits;
    std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(const float num) {

    this->_fixedPointNum = (int)roundf(num * (1 << this->_fractBits));
    std::cout << "Float constructor called" << std::endl;
    
}
    
float Fixed::toFloat(void) const {
    
    return ((float)this->_fixedPointNum / (1 << this->_fractBits));
    
}

int Fixed::toInt(void) const{
    
    return (this->_fixedPointNum >> this->_fractBits);
    
}

std::ostream &operator<<(std::ostream &outputObj, Fixed const &rhs) {
    
    outputObj << rhs.toFloat();
    return outputObj;
    
}