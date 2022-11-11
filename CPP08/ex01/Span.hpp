/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:42:15 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 21:03:33 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iterator>
# include <algorithm>
# include <iostream>
# include <stdexcept>
# include <numeric>
# include <climits>
# include <new>

class Span {

	Span();
	static int randomNumber();
	static void	positive(int &number);
	static void	printElement(int const &number);
	std::vector<int> *_vector;
	unsigned int _index;
	unsigned int _size;

public:

	Span(unsigned int N);
	Span(Span const &obj);
	Span & operator=(Span const &obj);
	~Span();

	void addNumber(int number);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	void printElements() const;
	void randomFill();
		
};

#endif