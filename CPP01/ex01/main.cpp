/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:08:48 by jbania            #+#    #+#             */
/*   Updated: 2022/10/09 21:18:11 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    std::string inputtedName, inputtedNumber;
    
    std::cout << "Please make up a name for zombies: " << std::endl;
    std::getline(std::cin, inputtedName);

    std::cout << "Please enter the number of zombies to be created: " << std::endl;
    std::getline(std::cin, inputtedNumber);
    int n = atoi(inputtedNumber.c_str());
    
    Zombie *horde = zombieHorde(n, inputtedName);
    
    delete [] horde;

    return 0;
}