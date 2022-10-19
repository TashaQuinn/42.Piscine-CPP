/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 02:35:07 by jbania            #+#    #+#             */
/*   Updated: 2022/10/09 21:10:18 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    
    PhoneBook phoneBook;
    std::string input;
    int i = 0;
    
    while (1)
    { 
        std::cout << "Please enter one of the following commands: \"ADD\", \"SEARCH\", \"EXIT\": " << std::endl;
        std::getline(std::cin, input);
        
        if (input == "ADD")
        {
            phoneBook.add(i);
            i++;
        }
        else if (input == "SEARCH")
            phoneBook.search(i);
        else if (input == "EXIT")
            break ;
        else
            std::cout << "Wrong command!" << std::endl;
    }
    
    return 0;
}