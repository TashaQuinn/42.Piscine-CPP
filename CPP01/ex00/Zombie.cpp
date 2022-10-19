/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:56:24 by jbania            #+#    #+#             */
/*   Updated: 2022/10/07 21:51:45 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
    
    this->_name = name;
    std::cout << this->_name << " has risen from the grave" << std::endl;
    
}

Zombie::~Zombie() {
    
    std::cout << this->_name << " ate too much and died (happily)" << std::endl;
    
}

void Zombie::announce(void) {
    
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
    
}