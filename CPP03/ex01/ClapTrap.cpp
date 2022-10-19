/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:26:52 by jbania            #+#    #+#             */
/*   Updated: 2022/10/17 23:45:07 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints (10), _attackDamage(0) {
    
    std::cout << "Default constructor for ClapTrap called" << std::endl;
    
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10), _energyPoints (10), _attackDamage(0) {
    
    std::cout << "Name constructor for ClapTrap called" << std::endl;
    
}

ClapTrap::ClapTrap(ClapTrap const &copy) {
    
    *this = copy;
    
    std::cout << "Copy constructor called" << std::endl;
    
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy) {
    
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    
    std::cout << "Assignement operator called" << std::endl;
        
    return *this;
    
}
    
ClapTrap::~ClapTrap() {
    
    std::cout << "Destructor for ClapTrap called" << std::endl;
    
}

std::ostream &operator<<(std::ostream &outputObj, ClapTrap const &inst) {
    
	outputObj << "ClapTrap " << inst.getName();
	return outputObj;
    
}

/*.....................................................................*/

void ClapTrap::attack(const std::string &target) {
    
    if (check())
        return;
    
    this->_energyPoints--;
    
    std::cout   << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
                << this->_attackDamage << " points of damage! Energy points left: " 
                << this->_energyPoints << std::endl;
        
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    if (check())
        return;
        
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
		this->_hitPoints = 0;
    
    std::cout   << "ClapTrap took " << amount << " points of damage! " 
                << "Hit points left: " << this->_hitPoints << std::endl;
    
}

void ClapTrap::beRepaired(unsigned int amount) {
    
    if (check())
        return;
    
    this->_hitPoints += amount;
    this->_energyPoints--;

    std::cout   << "ClapTrap " << this->_name << " has repaired itself, gaining " 
                << amount << " hit point(s) back! Hit points left: "
                << this->_hitPoints << ". Energy points left: " 
                << this->_energyPoints << std::endl;
    
}

int ClapTrap::check() {
    
    if (this->_hitPoints < 1 || this->_energyPoints < 1)
    {
        std::cout   << this->_name << " doesn't have enough energy or hit points left." 
                    << " The game is over:(" << std::endl;
        return 1;
    }
        return 0;
        
}

const std::string ClapTrap::getName() const {
    
	return this->_name;
    
}