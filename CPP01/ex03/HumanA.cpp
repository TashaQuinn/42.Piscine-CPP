/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:34:38 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 12:56:38 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type) {
    
}

HumanA::~HumanA() {
    
}

void HumanA::attack() {
    
    std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;

}