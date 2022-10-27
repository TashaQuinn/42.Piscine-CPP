/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:03:11 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 06:39:12 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    
    this->_name = "random name";
    this->_idx = 0;
    
    for (int i = 0; i < Character::inv_size; i++)
        inv[i] = NULL;
        
}

Character::Character(std::string name) {
    
    this->_name = name;
    this->_idx = 0;
    
    for (int i = 0; i < Character::inv_size; i++)
        inv[i] = NULL;
        
}

Character::~Character() {
    
    for (int i = 0; i < Character::inv_size; i++)
    {
        if (inv[i])
            delete inv[i];
    }

}

Character::Character(const Character &copy) {
    
    this->_name = copy._name;
    this->_idx = copy._idx;
    
    for (int i = 0; i < Character::inv_size; i++)
    {
        if (copy.inv[i])
            inv[i] = (copy.inv[i])->clone(); //?
        else
            inv[i] = NULL;
    }
    
}

Character &Character::operator=(const Character &copy) { //???
    
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_idx = copy._idx;
        for (int i = 0; i < Character::inv_size; i++)
        {
            if (inv[i])
                delete inv[i];
            if (copy.inv[i])
                inv[i] = copy.inv[i];
            else
                inv[i] = NULL;
        }
    }
    return *this;
    
}

const std::string &Character::getName() const {
    
    return this->_name;
    
}

void Character::equip(AMateria *materia) {
    
    for (int i = 0; i < Character::inv_size; i++)
    {
        if (materia == inv[i])
        {
            std::cout << "Already equipped!" << std::endl;
            return;
        }
    }
    if ((materia) && (this->_idx < Character::inv_size))
    {
        for (int i = 0; i < Character::inv_size; i++)
        {
            if(!inv[i])
            {
                inv[i] = materia;
                this->_idx++;
                break;
            }
        }
    }
    
}

void Character::unequip(int idx) {
    
    if (idx < 0 || idx >= Character::inv_size || !inv[idx])
    {
        std::cout << "Unequiping sth that doesn't exist is impossible!" << std::endl;
        return;
    }
    
    inv[idx] = NULL;
    this->_idx--;
    
}

void Character::use(int idx, ICharacter &target) {
    
    AMateria *tmp;

    if (idx >= Character::inv_size || idx < 0 || !inv[idx])
    {
        std::cout << "Usage of sth that doesn't exist is impossible!" << std::endl;
        return;
    }
    
    inv[idx]->use(target);
    tmp = inv[idx];
    unequip(idx);
    delete tmp;
    
}