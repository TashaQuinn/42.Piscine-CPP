/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:33:07 by jbania            #+#    #+#             */
/*   Updated: 2022/10/09 20:23:37 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>

int main(int argc, char *argv[])
{
    if (argv == NULL)
        return 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::string word(argv[i]);
            size_t wordLen = strlen(argv[i]);
            for (size_t j = 0; j < wordLen; j++)
            {
                word[j] = std::toupper(word[j]);
            }
            std::cout << word;
        }
    }
    std::cout << std::endl;
    return 0;
}