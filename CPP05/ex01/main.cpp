/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:09:00 by jbania            #+#    #+#             */
/*   Updated: 2022/10/25 00:09:04 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form f1("Test form #1", 0, 1);
        std::cout << f1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat jack = Bureaucrat("Jack", 23);
        Form f2("Test form #2", 22, 22);

        std::cout << jack << std::endl;
        std::cout << f2 << std::endl;
        jack.signForm(f2);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
