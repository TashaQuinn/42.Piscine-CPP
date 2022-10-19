/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 04:43:32 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 22:11:32 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    
    Harl harl;

    harl.complain("INFO");
    std::cout << std::endl;
    
    harl.complain("DEBUG");
    std::cout << std::endl;

    harl.complain("WARNING");
    std::cout << std::endl;
    
    harl.complain("ERROR");
    std::cout << std::endl;
    
    harl.complain("DEATH");
    std::cout << std::endl;
    
    return 0;
}