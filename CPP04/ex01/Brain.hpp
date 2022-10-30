/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:37:58 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 20:36:21 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

protected:

    std::string ideas[100];

public:
    
    Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &copy);
    ~Brain();

    std::string getIdea(int i);
    void setIdea(int i, std::string idea);
    
};

#endif