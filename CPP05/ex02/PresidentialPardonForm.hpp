/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 06:55:17 by jbania            #+#    #+#             */
/*   Updated: 2022/10/29 22:51:40 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    
    std::string _target;
     
public:

    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &copy);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

    void execute(Bureaucrat const &executor) const;
    
};

#endif