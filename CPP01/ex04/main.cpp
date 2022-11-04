/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:27:01 by jbania            #+#    #+#             */
/*   Updated: 2022/11/05 01:12:23 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::string filename, s1, s2, content;
    std::ifstream input;
    std::ofstream output;
    size_t index;
    
    if (argc != 4) {
        
        std::cerr << "Incorrect number of arguments" << std::endl;
        return 1;
        
    }
    
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    input.open(filename);
    
    if (input.fail()) {
        
        std::cerr   << "The program experienced an error trying to open " << filename 
                    << ". Please enter correct filename." << std::endl;
        return 1;
    }
    
    output.open(filename + ".replace");
    
    while (getline(input, content)) {
        
        while((index = content.find(s1)) != std::string::npos) {
            output << content.substr(0, index);
            output << s2;
            content.erase(0, index + s1.length());
        }
        //output << content << "\n";
    }

    input.close();
    output.close();
    
    std::cout << "Operation completed successfully!" << std::endl;
    
    return 0;
}