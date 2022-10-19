/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:01:46 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 20:23:17 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {

	Fixed _x;
	Fixed _y;
	
public:

	Point();
	Point(Point const &copy);
	Point(float x, float y);
	~Point();
	Point &operator=(Point const &copy);

	Fixed getX(void) const;
	Fixed getY(void) const;
	
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
