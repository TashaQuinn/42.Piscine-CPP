/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 05:38:25 by jbania            #+#    #+#             */
/*   Updated: 2022/11/02 08:16:02 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate();
void identify(Base* p);
void identify(Base& p);

Base* generate() {
    
    Base* output = NULL;
    
    int random = rand() % 3 + 1; // the range 1 to 3
	
    switch(random) {
        
        case 1:
            output = new A();
            break;
        case 2:
            output = new B();
            break;
        case 3:
            output = new C();
            break;
			
    }

    return (output);
    
}

void identify(Base* p) { // type of the object pointed to by p

    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "Base class <A> identified" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "Base class <B> identified" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "Base class <C> identified" << std::endl;
    
}

void identify(Base& p) {

    try {
		(void) dynamic_cast<A &>(p);
		std::cout  << "Base class <A> identified" << std::endl;
		return ;
	}
	catch (std::exception & error) {
		std::cerr << error.what() << std::endl;
	}

    try {
		(void) dynamic_cast<B &>(p);
		std::cout  << "Base class <B> identified" << std::endl;
		return ;
	}
	catch (std::exception & error) {
		std::cerr << error.what() << std::endl;
	}

    try {
		(void) dynamic_cast<C &>(p);
		std::cout  << "Base class <C> identified" << std::endl;
		return ;
	}
	catch (std::exception & error) {
		std::cerr << error.what() << std::endl;
	}
    
}

int main() {

    Base *myBase;
	
	srand (time(NULL));
    for (int i = 0; i < 10; i++) {
        
		myBase = generate();
		std::cout << "Random Base object generated." << std::endl;
		std::cout << "Identifying Base object with reference..." << std::endl;
		identify(myBase);
		std::cout << "Identifying Base object with pointer..." << std::endl;
		identify(*myBase);
		delete myBase;
		std::cout << "Base object deleted.\n" << std::endl;
        
	}
    
    return 0;
    
}