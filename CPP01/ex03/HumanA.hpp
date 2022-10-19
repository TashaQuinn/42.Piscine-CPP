/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:34:41 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 12:56:46 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    
    std::string _name;
    Weapon &_type;

public:

    HumanA(std::string name, Weapon &type);
    ~HumanA();
    
    void attack();
    
};

#endif