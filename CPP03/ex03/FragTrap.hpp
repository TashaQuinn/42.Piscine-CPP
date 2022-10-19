/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:27:20 by jbania            #+#    #+#             */
/*   Updated: 2022/10/17 05:43:02 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

    FragTrap();
    FragTrap(std::string const name);
    FragTrap(FragTrap const &copy);
    FragTrap &operator=(FragTrap const &copy);
    ~FragTrap();
    
    void attack(const std::string &target);
    void highFivesGuys();
    
};

#endif