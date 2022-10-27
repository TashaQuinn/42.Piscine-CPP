/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:26:52 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 00:01:33 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    
    this->_name = "";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    
    std::cout << "Default constructor for FragTrap called" << std::endl;
    
}

FragTrap::FragTrap(std::string const name) {
    
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    
    std::cout << "Name constructor for FragTrap called" << std::endl;
    
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy) {
    
    *this = copy;
    
    std::cout << "Copy constructor called" << std::endl;
    
}

FragTrap &FragTrap::operator=(FragTrap const &copy) {
    
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    
    std::cout << "Assignement operator called" << std::endl;
    
    return *this;
    
}
    
FragTrap::~FragTrap() {
    
    std::cout << "Destructor for FragTrap called" << std::endl;
    
}

void FragTrap::attack(const std::string &target) {
    
    if (check())
        return;
        
    this->_energyPoints--;
    
    std::cout   << "FragTrap " << this->_name << " attacks " << target << ", causing " 
                << this->_attackDamage << " points of damage! Energy points left: " 
                << this->_energyPoints << std::endl;
    
}

void FragTrap::highFivesGuys() {
     
    if (check())
        return;
        
    std::cout << "FragTrap " << this->_name << " loves everyone and wants to give everyone its BIG high five!" << std::endl;
     
}