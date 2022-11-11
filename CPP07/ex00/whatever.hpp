/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 09:47:45 by jbania            #+#    #+#             */
/*   Updated: 2022/11/07 22:19:37 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    
    T tmp = a;
    a = b;
    b = tmp;
    
}

template <typename T>
T const &max(T const &a, T const &b) {

    return (a > b ? a : b);
    
}

template <typename T>
T const &min(T const &a, T const &b) {

    return (a < b ? a : b);
    
}

#endif 