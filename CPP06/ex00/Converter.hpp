/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:47:12 by jbania            #+#    #+#             */
/*   Updated: 2022/11/01 12:26:18 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <limits>
#include <iomanip> // setprecision
#include <cstdlib> // atol, atoi, strtod
#include <cerrno>

typedef enum e_type {

	INVALID_TYPE = -1,
	TYPE_CHAR = 0,
	TYPE_INT = 1,
	TYPE_FLOAT = 2,
	TYPE_DOUBLE = 3
	
}	t_type;


class Converter {
	
	int	_type;
	std::string	const _input;
	std::string _typeAsString;
	
	bool _specialType;
	bool _charOverflow;
	bool _intOverflow;
	bool _floatOverflow ;
	bool _doubleOverflow;

	char _myChar;
	int	_myInt;
	float _myFloat;
	double _myDouble;

	int	_precision;
	
public:

    Converter(char const *input);
	Converter(Converter const &copy);
	Converter & operator=(Converter const &copy);
	~Converter();
	
	bool getSpecialType() const;
	int	getPrecision() const;

	bool isNumber();
	bool isInt();
	bool isFloat();
	bool isDouble();

	void initValues();
	int	checkDataType();
	void convert();
		
	void toChar(std::ostream &outputObj) const;
	void toInt(std::ostream &outputObj) const;
	void toFloat(std::ostream &outputObj) const;
	void toDouble(std::ostream &outputObj) const;
    
};

std::ostream & operator<<(std::ostream &outputObj, Converter const &inst);

#endif