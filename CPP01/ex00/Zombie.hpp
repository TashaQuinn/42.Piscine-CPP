/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:55:26 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 00:53:20 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    std::string _name;
    
public:
    
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void);
    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif