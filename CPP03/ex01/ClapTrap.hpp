/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:20 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 17:49:50 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:

    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:

    ClapTrap();
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap const &copy);
    ClapTrap &operator=(ClapTrap const &copy);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setDamage(unsigned int amount);
    int check();
    const std::string getName() const;
    
};

std::ostream &operator<<(std::ostream &outputObj, ClapTrap const &inst);

#endif