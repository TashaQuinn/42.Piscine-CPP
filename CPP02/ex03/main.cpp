/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:23:30 by jbania            #+#    #+#             */
/*   Updated: 2022/10/17 00:23:31 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
	
	Point one;
	Point two(20, 10.5f);

	Point a(5, 0);
	Point b(30, 0);
	Point c(0, 40);

	std::cout << "Point is out of the triangle" << std::endl;
	if (bsp(a, b, c, one))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	std::cout << "Point is inside of the triangle" << std::endl;
	if (bsp(a, b, c, two))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	return 0;

}
