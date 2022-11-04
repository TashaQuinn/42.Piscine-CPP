/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:13:00 by jbania            #+#    #+#             */
/*   Updated: 2022/11/04 23:49:52 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "Form.hpp"
 
class RobotomyRequestForm : public Form {

    std::string _target;
    
public:

    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &copy);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);

    void execute(Bureaucrat const &executor) const;

};

#endif