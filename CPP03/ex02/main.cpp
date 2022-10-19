/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:37 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 00:00:28 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    FragTrap robot3("FR4G-TP");
    const std::string target = "a bandit";
    
    std::cout << std::endl;

    robot3.attack(target);
    robot3.takeDamage(1);
    robot3.beRepaired(1);
    robot3.highFivesGuys();
    
    std::cout << std::endl;
    
    return 0;
    
}