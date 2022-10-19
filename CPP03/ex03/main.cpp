/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:37 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 00:00:07 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    
    DiamondTrap robot4("DI4MD-TP");
    const std::string target = "a bandit";
    
    std::cout << std::endl;
    
    robot4.attack(target);
    robot4.beRepaired(1);
    robot4.highFivesGuys();
    robot4.guardGate();
    robot4.whoAmI();
    
    std::cout << std::endl;
    
    return 0;
    
}