/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:22:00 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 21:03:04 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	
	{
		std::cout << "MutantStack" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		
		std::cout << "First element: "<< mstack.top() << std::endl;

		mstack.pop();
		
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		
		std::cout << "Printing elements in ASC order: " << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}

		MutantStack<int>::reverse_iterator it_r = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite_r = mstack.rend();

		++it_r;
		--it_r;

		std::cout << "Printing elements in reverse order:" << std::endl;
		while (it_r != ite_r) {
			std::cout << *it_r << std::endl;
			++it_r;
		}
		std::stack<int> s(mstack);

	}

	std::cout << std::endl;
	std::cout << "_________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	{
		std::cout << "List" << std::endl;
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_front(17);
		
		std::cout << "First element: "<< mstack.front() << std::endl;

		mstack.pop_front();
		
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Printing elements in ASC order: " << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		
		std::list<int>::reverse_iterator it_r = mstack.rbegin();
		std::list<int>::reverse_iterator ite_r = mstack.rend();

		++it_r;
		--it_r;

		std::cout << "Printing elements in reverse order: " << std::endl;
		while (it_r != ite_r) {
			std::cout << *it_r << std::endl;
			++it_r;
		}
		
	}

	std::cout << std::endl;
	std::cout << "_________________________________________________________________" << std::endl;
	std::cout << std::endl;
	
	{
		std::cout << "Vector" << std::endl;
		std::vector<int> mstack;

		mstack.push_back(5);
		mstack.front() = 17;
		
		std::cout << "First element: "<< mstack.front() << std::endl;

		mstack.front() = 5;
		
		std::cout << "Size of stack: " << mstack.size() << std::endl;
		
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Printing elements in ASC order: " << std::endl;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}

		std::vector<int>::reverse_iterator it_r = mstack.rbegin();
		std::vector<int>::reverse_iterator ite_r = mstack.rend();

		++it_r;
		--it_r;

		std::cout << "Printing elements in reverse order: " << std::endl;
		while (it_r != ite_r) {
			std::cout << *it_r << std::endl;
			++it_r;
		}
	}
	
	return 0;
	
}