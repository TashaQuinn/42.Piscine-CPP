/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 20:19:36 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

protected:

    std::string type;

public:
    
    Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &copy);
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound();
    
};

std::ostream &operator<<(std::ostream &outputObj, Animal const &inst);

#endif