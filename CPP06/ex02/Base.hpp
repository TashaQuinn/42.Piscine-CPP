/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 05:16:52 by jbania            #+#    #+#             */
/*   Updated: 2022/11/02 06:10:57 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base {

public:

    virtual ~Base() {}
    
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif