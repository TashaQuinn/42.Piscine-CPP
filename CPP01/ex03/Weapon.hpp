/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:34:08 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 21:27:31 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    
    std::string _type;

public:
   
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    
    const std::string &getType() const;
    void setType(std::string type);
    
};

#endif