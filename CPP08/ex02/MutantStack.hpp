/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:20:40 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 21:03:00 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>
# include <list>
# include <vector>

template<typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack() {};
	MutantStack(MutantStack const &obj) { *this = obj; };
	virtual ~MutantStack() {};

	MutantStack & operator=(MutantStack const &obj) {
		std::stack<T>::operator=(obj);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		
	iterator begin() { return(std::stack<T>::c.begin()); }
	iterator end() { return(std::stack<T>::c.end()); }

	reverse_iterator rbegin() { return(std::stack<T>::c.rbegin()); }
	reverse_iterator rend() { return(std::stack<T>::c.rend()); }
	
};

#endif