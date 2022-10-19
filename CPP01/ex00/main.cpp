/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:08:48 by jbania            #+#    #+#             */
/*   Updated: 2022/10/09 20:45:07 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    std::string inputtedName1, inputtedName2, inputtedName3;
    
    std::cout << "Please make up a name for the first zombie: " << std::endl;
    std::getline(std::cin, inputtedName1);

    std::cout << "Please make up a name for the second zombie: " << std::endl;
    std::getline(std::cin, inputtedName2);

    std::cout << "Please make up a name for the third zombie: " << std::endl;
    std::getline(std::cin, inputtedName3);
    
    Zombie *zombie = newZombie(inputtedName1);
    zombie->announce();
    
    randomChump(inputtedName2);
    
    Zombie zomb(inputtedName3);
    zomb.announce();

    delete zombie;

    return 0;
}