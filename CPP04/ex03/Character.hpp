/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:03:25 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 06:35:45 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
    
private:

    //Character(); //?
    std::string _name;
    static const int inv_size = 4;
    AMateria *inv[Character::inv_size];
    int _idx;

public:

    Character();
    Character(std::string name);
    Character(Character const &copy);
    ~Character();
    Character &operator=(Character const &copy);

    std::string const &getName() const;
    void equip(AMateria *materia);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    
};

#endif