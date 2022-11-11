/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:18:23 by jbania            #+#    #+#             */
/*   Updated: 2022/11/08 21:03:36 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _size(N) {

	_vector = new std::vector<int>(N);

	if (_vector == NULL)
		throw std::bad_alloc();
		
	_index = 0;
	
}

Span::Span(Span const &obj) {

	this->_size = 0;
	*this = obj;
	
}
		
Span::~Span() {
	
	delete this->_vector;

}

Span &Span::operator=(Span const &obj) {

	if (this == &obj)
		return (*this);
		
	if (this->_size > 0)
		delete this->_vector;
		
	this->_size = obj._size;
	this->_index = obj._index;
	this->_vector = new std::vector<int>(this->_size);

	if (this->_vector == NULL)
		throw std::bad_alloc();
		
	for (unsigned int i = 0; i < this->_size; i++) {
		this->_vector->at(i) = obj._vector->at(i);
	}

	return (*this);
	
}

void Span::addNumber(int number) {

	if (this->_index == this->_size)
		throw std::out_of_range("Span::Maximum size reached!");
		
	this->_vector->at(this->_index) = number;
	this->_index++;
	
}

unsigned int Span::shortestSpan() const {
	
	if (this->_index < 2)
		throw std::logic_error("Span::Not enough elements to create shortest span!");
		
	std::vector<int> vector_copy = *this->_vector;
	std::adjacent_difference(vector_copy.begin(), vector_copy.end(), vector_copy.begin());
	for_each(vector_copy.begin(), vector_copy.end(), Span::positive);
	
	return (*std::min_element(vector_copy.begin(), vector_copy.end()));
	
}

unsigned int Span::longestSpan() const {
	
	if (this->_index < 2)
		throw std::logic_error("Span::Not enough elements to create longest span!");
		
	int	min = *std::min_element(this->_vector->begin(), this->_vector->end());
	int	max = *std::max_element(this->_vector->begin(), this->_vector->end());

	return (max - min);
	
}

void Span::positive(int &number) {

	if (number < 0)
		number = number * (-1);
		
}

void Span::printElements() const {
	
	std::copy(this->_vector->begin(), this->_vector->end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	
}

void Span::randomFill() {
	
	std::srand(time(NULL));
	std::generate(this->_vector->begin(), this->_vector->end(), Span::randomNumber);
	this->_index = this->_size;
	
}

int	Span::randomNumber() {
	
	int	newNumber = (std::rand() % INT_MAX);
	
	if (std::rand() % 2 == 1)
		newNumber = newNumber << 1;
		
	return (newNumber);
	
}