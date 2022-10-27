/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:08:53 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:12:38 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Form *form;
    Bureaucrat jack = Bureaucrat("Jack", 1);
    try
    {
        form = new ShrubberyCreationForm("tree");
        jack.signForm(*form);
        jack.executeForm(*form);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
