/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:26:55 by jbania            #+#    #+#             */
/*   Updated: 2022/11/07 17:17:56 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <stdexcept>

template <typename T>
class Array {

    T* _array;
	unsigned int _size;
    
public:

	Array();
	Array(unsigned int size);
	Array(Array const &copy);
    Array &operator=(Array<T> const &copy);
	T &operator[](unsigned int index);
    ~Array();

	unsigned int size();
    
};

template <typename T>
Array<T>::Array() {
    
    this->_size = 0;
	this->_array = NULL;   
    
}

template <typename T>
Array<T>::Array(unsigned int size) {
    
	this->_array = new T[size];
    this->_size = size;
    
	for (unsigned int i = 0; i < size; i++)
		this->_array[i] = 0;

}

template <typename T>
Array<T>::Array(Array<T> const &copy) {
    
	this->_size = 0;
	*this = copy;
    
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &copy) {
    
	if (this == &copy)
		return (*this);
        
	if (this->_size > 0)
		delete [] this->_array;
        
	this->_size = copy._size;
	this->_array = new T[this->_size];
    
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = copy._array[i];
        
	return (*this);
    
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
    
	if (index >= this->_size)
		throw std::out_of_range("Array::Index out of bounds!");
        
	return (this->_array[index]);
    
}

template <typename T>
unsigned int Array<T>::size() { return (this->_size); }

template <typename T>
Array<T>::~Array() {
    
	if (this->_size > 0)
		delete [] this->_array;
        
}

#endif