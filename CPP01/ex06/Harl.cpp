/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 04:44:27 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 23:12:28 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {
    
}

void Harl::debug(void) {
     
    std::cout   << "I love having extra bacon formy 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" 
                << std::endl;
                
}

void Harl::info(void) {

    std::cout   << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
                << std::endl;
                
}

void Harl::warning(void) {

    std::cout   << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
                << std::endl;
                
}

void Harl::error(void) {

    std::cout   << "This is unacceptable! I want to speak to the manager now." 
                << std::endl;
                
}

void Harl::complain(std::string level) {

    int i;
    
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };

    for(i = 0; i < 4; i++)
    {
        if (lvl[i] == level)
            break;
    }
    
    switch (i)
    {
        case 0:
            Harl::debug();
        case 1:
            Harl::info();
        case 2:
            Harl::warning();
        case 3:
            Harl::error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
            break;
    }

}
