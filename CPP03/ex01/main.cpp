/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:37 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 00:00:36 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    ScavTrap robot2("SC4V-TP");
    const std::string target = "a bandit";
    
    std::cout << std::endl;
    
    robot2.attack(target);
    robot2.takeDamage(2);
    robot2.beRepaired(1);
    robot2.guardGate();
    
    std::cout << std::endl;
    
    return 0;
    
}