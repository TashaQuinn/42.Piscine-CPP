/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:20 by jbania            #+#    #+#             */
/*   Updated: 2022/10/17 05:36:43 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

    ScavTrap();
    ScavTrap(std::string const name);
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(ScavTrap const &copy);
    ~ScavTrap();
    
    void attack(const std::string &target);
    void guardGate();
    
};

#endif