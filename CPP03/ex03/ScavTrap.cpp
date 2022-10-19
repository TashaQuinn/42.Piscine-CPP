/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:26:52 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 00:02:03 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    
    this->_name = "";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    
    std::cout << "Default constructor for ScavTrap called" << std::endl;
    
}

ScavTrap::ScavTrap(std::string const name) {
    
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    
    std::cout << "Name constructor for ScavTrap called" << std::endl;
    
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy) {
    
    *this = copy;
    
    std::cout << "Copy constructor called" << std::endl;
    
}


ScavTrap &ScavTrap::operator=(ScavTrap const &copy) {
    
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    
    std::cout << "Assignement operator called" << std::endl;
    
    return *this;
    
}
    
ScavTrap::~ScavTrap() {
    
    std::cout << "Destructor for ScavTrap called" << std::endl;
    
}

void ScavTrap::attack(const std::string &target) {
    
    if (check())
        return;
        
    this->_energyPoints--;
    
    std::cout   << "ScavTrap " << this->_name << " attacks " << target << ", causing " 
                << this->_attackDamage << " points of damage! Energy points left: " 
                << this->_energyPoints << std::endl;
    
}

void ScavTrap::guardGate() {

    if (check())
        return;
    
    std::cout << "ScavTrap " << this->_name << " bravely guards the gates! Keeper MODE ON" << std::endl;
     
}