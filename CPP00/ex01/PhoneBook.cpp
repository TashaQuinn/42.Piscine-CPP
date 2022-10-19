/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:00:27 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 19:43:15 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}
    
void PhoneBook::add(int i) {
    
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
    
    std::cout << "Please enter your First Name: " << std::endl;
    std::getline(std::cin, firstName);
    while (firstName.length() == 0) {
        std::cout << "You've entered an empty string. Please try again: " << std::endl;
        std::getline(std::cin, firstName);
    }
    
    std::cout << "Please enter your Last Name: " << std::endl;
    std::getline(std::cin, lastName);
    while (lastName.length() == 0) {
        std::cout << "You've entered an empty string. Please try again: " << std::endl;
        std::getline(std::cin, lastName);
    }
    
    std::cout << "Please enter your nickname: " << std::endl;
    std::getline(std::cin, nickname);
    while (nickname.length() == 0) {
        std::cout << "You've entered an empty string. Please try again: " << std::endl;
        std::getline(std::cin, nickname);
    }
    
    std::cout << "Please enter your phone number: " << std::endl;
    std::getline(std::cin, phoneNumber);
    while (phoneNumber.length() == 0) {
        std::cout << "You've entered an empty string. Please try again: " << std::endl;
        std::getline(std::cin, phoneNumber);
    }
    
    std::cout << "Please enter your daaaaaaaaarkest secret: " << std::endl;
    std::getline(std::cin, darkestSecret);
    while (darkestSecret.length() == 0) {
        std::cout << "You've entered an empty string. Please try again: " << std::endl;
        std::getline(std::cin, darkestSecret);
    }
    
    if (i < 8)
    {
        this->_contacts[i] = Contact(firstName, lastName, nickname,
            phoneNumber, darkestSecret);
    }
    else
    {
        this->_contacts[i % 8] = Contact(firstName, lastName, nickname,
            phoneNumber, darkestSecret);
    }
}

void PhoneBook::search(int i) {
    
    std::string firstName, lastName, nickname, input;
    int k = 0;
    
    if (i == 0)
    {
        std::cout << "WARNING! No contacts found. Please ADD some ;)" << std::endl;
        return ;
    }

    if (i > 8)
        i = 8;
    
    for (int j = 0; j < i; j++)
    { 
        if (k == 0)
        {
            std::cout   << std::setw(10) << "INDEX"
                        << '|' << std::setw(10) << "FIRST_NAME"
                        << '|' << std::setw(10) << "LAST_NAME"
                        << '|' << std::setw(10) << "NICKNAME"
                        << '|' << std::endl;
            k++;
        }

        if (this->_contacts[j].getFirstName().length() > 10)
            firstName = this->_contacts[j].getFirstName().substr(0, 9) + ".";
        else
            firstName = this->_contacts[j].getFirstName();
            
        if (this->_contacts[j].getLastName().length() > 10)
            lastName = this->_contacts[j].getLastName().substr(0, 9) + ".";
        else
            lastName = this->_contacts[j].getLastName();
            
        if (this->_contacts[j].getNickname().length() > 10)
            nickname = this->_contacts[j].getNickname().substr(0, 9) + ".";
        else
            nickname = this->_contacts[j].getNickname();
        
        std::cout   << std::setw(10) << j + 1
                    << '|' << std::setw(10) << firstName
                    << '|' << std::setw(10) << lastName
                    << '|' << std::setw(10) << nickname
                    << '|' << std::setw(10) << std::endl;
    }
    
    while(1)
    {
        std::cout << "Please enter the index of the contact you are interested in: " << std::endl;
        std::getline(std::cin, input);
        int n = atoi(input.c_str());
        
        if (n >= 1 && n < 9)
        {
            std::cout << this->_contacts[n - 1].getFirstName() << std::endl;
            std::cout << this->_contacts[n - 1].getLastName() << std::endl;
            std::cout << this->_contacts[n - 1].getNickname() << std::endl;
            std::cout << this->_contacts[n - 1].getPhoneNumber() << std::endl;
            std::cout << this->_contacts[n - 1].getDarkestSecret() << std::endl;
            break ;
        }
        else
            std::cout << "The index should be a number between 1 and 8 (incl.) entered without spaces and any other stuff. Please try again: " << std::endl;
    }
}