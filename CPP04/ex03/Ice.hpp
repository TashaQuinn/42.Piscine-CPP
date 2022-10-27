/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:31:12 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:00:56 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:

    Ice();
    Ice(std::string const &type); //?
    Ice(Ice const &copy);
    Ice &operator=(Ice const &copy);
    ~Ice();

    AMateria *clone() const;
    void use(ICharacter &target);
    
};

#endif