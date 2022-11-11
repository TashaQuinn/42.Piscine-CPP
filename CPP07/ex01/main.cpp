/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:07:29 by jbania            #+#    #+#             */
/*   Updated: 2022/11/06 10:12:24 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void show_el(const T &val) {

    std::cout << val << std::endl;
    
}

int main() {
    
    int test_arr[6] = {1, 2, 3, 4, 5, 6};
    std::string str_arr[5] = {"one", "two", "three", "four", "five"};
    float f_arr[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    ::iter(test_arr, 6, show_el);
    ::iter(str_arr, 5, show_el);
    ::iter(f_arr, 5, show_el);

    return 0;
    
}