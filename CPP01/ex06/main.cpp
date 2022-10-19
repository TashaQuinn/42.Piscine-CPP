/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 04:43:32 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 23:09:22 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    
    Harl harl;

    if (argc != 2)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return 1;
    }

    harl.complain(argv[1]);
    
    return 0;
}