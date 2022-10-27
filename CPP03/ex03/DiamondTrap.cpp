/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:26:52 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 22:32:19 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "Default constructor for DiamondTrap called" << std::endl;
    
}

DiamondTrap::DiamondTrap(std::string const name) {

    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
    
    std::cout << "Name constructor for DiamondTrap called" << std::endl;
    
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    
	*this = copy;

    std::cout << "Copy constructor for DiamondTrap called" << std::endl;
    
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy) {
    
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    
    std::cout << "Assignement operator called" << std::endl;
    
    return *this;
    
}
    
DiamondTrap::~DiamondTrap() {
    
    std::cout << "Destructor for DiamondTrap called" << std::endl;
    
}

void DiamondTrap::attack(const std::string &target) {
    
    ScavTrap::attack(target);
    
}

void DiamondTrap::whoAmI() {
     
    if (check())
        return;
        
    std::cout   << "I am " << this->_name << " and my ClapTrap name is "
		        << ClapTrap::_name << std::endl;
     
}