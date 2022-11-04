/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:03:17 by jbania            #+#    #+#             */
/*   Updated: 2022/11/01 09:59:33 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	main(int const argc, char const **argv) {
	
	if (argc != 2) {
		
		std::cout << "Error\nProgram needs one argument to convert!\nchar, int, float or double in decimal notation.\n";
		return -1;
		
	}
	
	Converter input(argv[1]);
	input.convert();
	std::cout << input;
	
	return 0;

}