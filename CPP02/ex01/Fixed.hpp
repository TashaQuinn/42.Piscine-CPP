/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:44:06 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 03:28:21 by jbania           ###   ########.fr       */
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

    int getRawBits() const;
    void setRawBits(int const raw);
    
    /*....................................*/
    
    Fixed(const int n);
    Fixed(const float n);
    
    float toFloat(void) const;
    int toInt(void) const;  
    
};

std::ostream &operator<<(std::ostream &outputObj, Fixed const &rhs);

#endif