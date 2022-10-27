/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:25:08 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 06:24:43 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
    
protected:

    std::string _type;

public:
    
    AMateria();
    AMateria(std::string const &type); //?
    AMateria(AMateria const &copy);
    AMateria &operator=(AMateria const &copy);
    virtual ~AMateria() {};

    std::string const &getType() const;
    
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) { (void) target; }
    
};

#endif