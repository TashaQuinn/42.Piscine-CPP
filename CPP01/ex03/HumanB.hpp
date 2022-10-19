/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:34:55 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 21:53:10 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

    std::string _name;
    Weapon *_type;
    
public:
    
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    
    void attack();
    void setWeapon(Weapon &type);
    
};

#endif
