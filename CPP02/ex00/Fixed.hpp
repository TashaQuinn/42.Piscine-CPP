/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:44:06 by jbania            #+#    #+#             */
/*   Updated: 2022/10/14 03:55:06 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
    
};

#endif