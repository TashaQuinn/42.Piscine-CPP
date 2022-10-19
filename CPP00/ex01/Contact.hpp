/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:00:29 by jbania            #+#    #+#             */
/*   Updated: 2022/10/05 04:43:58 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
    
    std::string _firstName, _lastName, _nickname, _phoneNumber, _darkestSecret;
    
public:

    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname,
            std::string phoneNumber, std::string darkestSecret);
    ~Contact();
    
    void setFirstName(std::string firstName);
    std::string getFirstName();
    
    void setLastName(std::string lastName);
    std::string getLastName();
    
    void setNickname(std::string nickname);
    std::string getNickname();
    
    void setPhoneNumber(std::string phoneNumber);
    std::string getPhoneNumber();

    void setDarkestSecret(std::string darkestSecret);
    std::string getDarkestSecret();
    
};

#endif