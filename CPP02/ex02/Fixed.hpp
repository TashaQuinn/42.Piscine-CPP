/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:44:06 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 11:59:34 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
    int _fixedPointNum;
    static const int _fractBits = 8;

public:

    Fixed();
    Fixed(Fixed const &copy);
    Fixed &operator=(Fixed const &copy);
    ~Fixed();
    Fixed(const int n);
    Fixed(const float n);

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
    /*........................................*/
    
    bool operator>(const Fixed &rhs) const;
    bool operator<(const Fixed &rhs) const;
    bool operator>=(const Fixed &rhs) const;
    bool operator<=(const Fixed &rhs) const;
    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;
    
    Fixed operator+(const Fixed &rhs);
    Fixed operator-(const Fixed &rhs);
    Fixed operator*(const Fixed &rhs);
    Fixed operator/(const Fixed &rhs);
    
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed &num1, Fixed &num2);
    static Fixed& max(Fixed &num1, Fixed &num2);
    static const Fixed& max(const Fixed &num1, const Fixed &num2);
    static const Fixed& min(const Fixed &num1, const Fixed &num2);
    
};

std::ostream &operator<<(std::ostream &outputObj, Fixed const &rhs);

#endif