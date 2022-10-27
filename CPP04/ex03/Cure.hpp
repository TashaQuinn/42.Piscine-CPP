/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:30:47 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:00:50 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp" 

class Cure : public AMateria {
    
public:

    Cure();
    Cure(std::string const &type); //?
    Cure(Cure const &copy);
    Cure &operator=(Cure const &copy);
    ~Cure();
    
    AMateria *clone() const;
    void use(ICharacter &target);
    
};

#endif