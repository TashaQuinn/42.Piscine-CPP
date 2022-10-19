/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:39:05 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 21:02:34 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    
    Zombie* zombie = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        zombie[i].setName(name);
        zombie[i].announce();
    }
    
    return zombie;
}