/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:37 by jbania            #+#    #+#             */
/*   Updated: 2022/10/17 23:43:43 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap robot("CLP4P-TP");
    const std::string target = "a bandit";
    
    std::cout << std::endl;
    
    robot.attack(target);
    robot.attack(target);

    std::cout << std::endl;
    
    robot.takeDamage(1);
    robot.takeDamage(10); //check if the robot stops when there are no hp points left

    std::cout << std::endl;

    robot.beRepaired(1);
    //robot.beRepaired(2); //check if the robot stops when there are no energy points left
    
    std::cout << std::endl;
    
    std::cout << robot << std::endl; //check ostream
    
    return 0;
    
}