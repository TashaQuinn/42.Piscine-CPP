/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 00:56:36 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    
    type = "WrongCat";
    std::cout << "Default constructor for WrongCat called" << std::endl;
    
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy) {
    
    *this = copy;
    std::cout << "Copy constructor for WrongCat called" << std::endl;
    
}

WrongCat &WrongCat::operator=(WrongCat const &copy) {
    
    this->type = copy.type;
    std::cout << "Assignement operator called" << std::endl;
    return *this;
    
}
    
WrongCat::~WrongCat() {
    
    std::cout << "Destructor for WrongCat called" << std::endl;
    
}

/*.....................................................................*/

void WrongCat::makeSound() {
    
    std::cout << "WRONG MEOW!" << std::endl;
    
}
