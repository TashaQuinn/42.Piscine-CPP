/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:43:52 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 12:51:16 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    
    this->_fixedPointNum = 0;
    
}

Fixed::Fixed(Fixed const &copy) {
    
    this->_fixedPointNum = copy.getRawBits();
    
}

Fixed &Fixed::operator=(Fixed const &copy) {
    
    this->_fixedPointNum = copy.getRawBits();
    return *this;
    
}
    
Fixed::~Fixed() {
    
}

int Fixed::getRawBits() const {
    
    return (this->_fixedPointNum);
    
}

void Fixed::setRawBits(int const raw) {
    
    this->_fixedPointNum = raw;
    
}

Fixed::Fixed(const int num) {
    
    this->_fixedPointNum = num << this->_fractBits;

}

Fixed::Fixed(const float num) {

    this->_fixedPointNum = (int)roundf(num * (1 << this->_fractBits));
    
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

/*....................................................................*/

bool Fixed::operator>(const Fixed &rhs) const {
    
    return (this->_fixedPointNum > rhs._fixedPointNum);

}

bool Fixed::operator<(const Fixed &rhs) const {
    
    return (this->_fixedPointNum < rhs._fixedPointNum);
    
}

bool Fixed::operator>=(const Fixed &rhs) const {

    return (this->_fixedPointNum >= rhs._fixedPointNum);
    
}

bool Fixed::operator<=(const Fixed &rhs) const {

    return (this->_fixedPointNum <= rhs._fixedPointNum);
    
}

bool Fixed::operator==(const Fixed &rhs) const {
    
    return (this->_fixedPointNum == rhs._fixedPointNum);

}

bool Fixed::operator!=(const Fixed &rhs) const {

    return (this->_fixedPointNum != rhs._fixedPointNum);

}

Fixed Fixed::operator+(const Fixed &rhs) {

    return Fixed(toFloat() + rhs.toFloat());
    
}

Fixed Fixed::operator-(const Fixed &rhs) {
    
    return Fixed(toFloat() - rhs.toFloat());
    return *this;
    
}

Fixed Fixed::operator*(const Fixed &rhs) {
    
    return Fixed(toFloat() * rhs.toFloat());
    
}

Fixed Fixed::operator/(const Fixed &rhs) {
    
    return Fixed(toFloat() / rhs.toFloat());
    
}

Fixed& Fixed::operator++() {
    
    this->_fixedPointNum++;
    return *this;
    
}

Fixed& Fixed::operator--() {

    this->_fixedPointNum--;
    return *this;
    
}

Fixed Fixed::operator++(int) {

    Fixed tmp(*this);
    this->_fixedPointNum++;
    return tmp;

}

Fixed Fixed::operator--(int) {
    
    Fixed tmp(*this);
    this->_fixedPointNum--;
    return tmp;
    
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2) {

    if (num1 < num2)
        return num1;
    return num2;
    
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2) {
    
    if (num1 < num2)
        return num2;
    return num1;
    
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2) {
    
    if (num1 < num2)
        return num1;
    return num2;
    
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2) {
    
    if (num1 < num2)
        return num2;
    return num1;
}