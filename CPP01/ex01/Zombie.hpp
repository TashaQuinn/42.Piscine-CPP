/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:55:26 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 00:53:12 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    std::string _name;

public:
    
    Zombie();
    ~Zombie();

    void announce(void);
    void setName(std::string name);
    
};

Zombie *zombieHorde(int N, std::string name);

#endif