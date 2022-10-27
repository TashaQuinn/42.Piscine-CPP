/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/19 00:59:30 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    
protected:

    std::string type;
    
public:
    
    WrongAnimal();
    WrongAnimal(WrongAnimal const &copy);
    WrongAnimal &operator=(WrongAnimal const &copy);
    virtual ~WrongAnimal();

    std::string getType() const;
    void makeSound();
    
};

std::ostream &operator<<(std::ostream &outputObj, WrongAnimal const &inst);

#endif