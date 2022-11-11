/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:08:32 by jbania            #+#    #+#             */
/*   Updated: 2022/11/06 17:23:31 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *arr, int len, void (*f)(const T &)) {
    
    for (int i = 0; i < len; i++) {
        f(arr[i]);
    }
    
}

#endif