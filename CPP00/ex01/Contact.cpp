/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:28:43 by jbania            #+#    #+#             */
/*   Updated: 2022/10/05 19:05:22 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
            std::string phoneNumber, std::string darkestSecret) {
        this->_firstName = firstName; 
        this->_lastName = lastName; 
        this->_nickname = nickname; 
        this->_phoneNumber = phoneNumber;
        this->_darkestSecret = darkestSecret; 
}
            
void Contact::setFirstName(std::string firstName){ 
    this->_firstName = firstName; 
}

std::string Contact::getFirstName() { 
    return this->_firstName; 
}
                
void Contact::setLastName(std::string lastName){ 
    this->_lastName = lastName; 
}

std::string Contact::getLastName() { 
    return this->_lastName; 
}

void Contact::setNickname(std::string nickname){ 
    this->_nickname = nickname; 
}

std::string Contact::getNickname() { 
    return this->_nickname; 
}

void Contact::setPhoneNumber(std::string phoneNumber){ 
    this->_phoneNumber = phoneNumber; 
}
               
std::string Contact::getPhoneNumber() { 
    return this->_phoneNumber; 
}

void Contact::setDarkestSecret(std::string darkestSecret){ 
    this->_darkestSecret = darkestSecret; 
}

std::string Contact::getDarkestSecret() { 
    return this->_darkestSecret; 
}