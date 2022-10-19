/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:01:40 by jbania            #+#    #+#             */
/*   Updated: 2022/10/18 22:35:40 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {

}

Point::Point(float x, float y) : _x(x), _y(y) {

}

Point::Point(const Point &copy) {
	
	*this = copy;
	
}

Point::~Point() {

}

Point &Point::operator=(const Point &copy){
	
	this->_x = copy.getX();
	this->_y = copy.getY();
	
	return *this;
	
}

Fixed Point::getX() const {
	
	return this->_x;
	
}

Fixed Point::getY() const {

	return this->_y;

}