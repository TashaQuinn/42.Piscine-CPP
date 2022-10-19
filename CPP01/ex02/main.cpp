/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:24:28 by jbania            #+#    #+#             */
/*   Updated: 2022/10/12 20:07:52 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << " - the memory adress of the string variable" << std::endl;
    std::cout << stringPTR << " - the memory adress held by stringPTR" << std::endl;
    std::cout << &stringREF << " - the memory adress held by stringREF" << std::endl;
    
    std::cout << str << " - the value of the string variable" << std::endl;
    std::cout << *stringPTR << " - the value pointed to by stringPTR" << std::endl;
    std::cout << stringREF << " - the value pointed to by stringREF" << std::endl;
    
    return 0;
}