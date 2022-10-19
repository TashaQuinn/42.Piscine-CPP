/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:20 by jbania            #+#    #+#             */
/*   Updated: 2022/10/17 06:51:21 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

    std::string _name;
    
public:

    DiamondTrap();
    DiamondTrap(std::string const name);
    DiamondTrap(DiamondTrap const &copy);
    DiamondTrap &operator=(DiamondTrap const &copy);
    ~DiamondTrap();
    
    void attack(const std::string &target);
    void whoAmI();
    
};

#endif