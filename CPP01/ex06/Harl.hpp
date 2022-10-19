/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 04:44:31 by jbania            #+#    #+#             */
/*   Updated: 2022/10/10 06:02:43 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
public:

    Harl();
    ~Harl();

    void complain(std::string level);
    
};

#endif