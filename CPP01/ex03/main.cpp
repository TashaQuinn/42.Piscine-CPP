/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:33:55 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 21:53:44 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club); 
        bob.attack(); 
        club.setType("some other type of club"); 
        bob.attack(); 
    }
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim"); 
        jim.setWeapon(club); 
        jim.attack(); 
        club.setType("some other type of club"); 
        jim.attack(); 
    }
    
    return 0; 
}