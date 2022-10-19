/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:35:06 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 20:17:07 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
    
}

HumanB::HumanB(std::string name) : _name(name), _type(NULL) {
    
}

HumanB::~HumanB() {
    
}

void HumanB::attack() {
    
    if (!(this->_type))
	{
		std::cout << this->_name << " attacks with his/her bare hands" << std::endl;
		return;
	}
    
    std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;

}

void HumanB::setWeapon(Weapon &type) {

    this->_type = &type;
    
}