/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:53:25 by jbania            #+#    #+#             */
/*   Updated: 2022/11/05 07:33:12 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(char const *input) : _input(static_cast<std::string>(input)) { initValues(); }

Converter::Converter(Converter const &copy) : _input(copy._input) { *this = copy;}

Converter &Converter::operator=(Converter const &copy) { (void) copy; return *this; }

Converter::~Converter() {}

std::ostream  &operator<<(std::ostream &outputObj, Converter const &inst) {

    std::cout << std::fixed << std::setprecision(inst.getPrecision());
    
	outputObj << "char: ";      inst.toChar(outputObj);     outputObj << std::endl;
	outputObj << "int: ";	    inst.toInt(outputObj);		outputObj << std::endl;
	outputObj << "float ";	    inst.toFloat(outputObj);	outputObj << std::endl;
	outputObj << "double: ";	inst.toDouble(outputObj);	outputObj << std::endl;
    
	return outputObj;
    
}

bool Converter::getSpecialType() const { return this->_specialType; }

int	Converter::getPrecision() const { return this->_precision; }

void Converter::initValues() {
    
	this->_specialType = false;
	this->_charOverflow = false;
	this->_intOverflow = false;
	this->_floatOverflow = false;
	this->_doubleOverflow = false;
    
    //init with default values
    this->_type = -2;
    this->_myChar = ' ';
	this->_myInt = 0;
	this->_myFloat = 0.0f;
	this->_myDouble = 0.0;
	this->_precision = 1;
    
}

int	Converter::checkDataType() {
    
	if (this->_input.length() == 0)
		return INVALID_TYPE;
	if (this->_input.length() == 1) {
		if (isdigit(this->_input[0]) == true)
			return TYPE_INT;
		return TYPE_CHAR;
	}
	if (isInt() == true)
		return TYPE_INT;
	if (isFloat() == true)
		return TYPE_FLOAT;
	if (isDouble() == true)
		return TYPE_DOUBLE;
        
	return INVALID_TYPE;
    
}

bool Converter::isInt() {
    
	if (this->_input[0] != '-' && this->_input[0] != '+' && !isdigit(this->_input[0])) // "hello" || 'c'
		return (false);
        
	for (unsigned long i = 1; this->_input[i]; i++) {
        
		if (isdigit(this->_input[i]) == false) // 1h
			return (false);
            
	}
    
	return (true);
    
}

bool Converter::isNumber() { // for float and double
    
	if (this->_input[0] != '-' && this->_input[0] != '+' && !isdigit(this->_input[0])) // "hello" || 'c'
		return (false);

	bool point = false; // .
	int	pointPos = -1;

	for (unsigned long i = 1; this->_input[i]; i++) { // 1.0f: length = 4
        
		if (this->_input[i] == '.') {
			if (point == false) {
				point = true;
				pointPos = i; // 1.0f: i = 1
			}
			else // 1..0f
				return (false);
		}
		else if (isdigit(this->_input[i]) == false
                && (this->_input[i] != 'f' || (this->_input[i] == 'f' && (this->_input.length() - 1) > i))) // 1.0a || 1.0f: 4 - 1 > 3 || 1.0f2: 5 - 1 > 3
			return (false);
            
	}
    
	if (point)
		this->_precision = this->_input.length() - pointPos - 1; // 1.0f: 4 - 1 - 1 = 2
         
	return (true);
    
}

bool Converter::isDouble() {
    
	std::string	const specialType[4] = {"inf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 4; i++) {
        
		if (this->_input == specialType[i]) { 
			this->_specialType = true;
			return (true);
		}
        
	}
    
	if (isNumber() == false)
		return (false);
        
	return (true);

}

bool Converter::isFloat() {
    
	std::string	const specialType[4] = {"inff", "-inff", "+inff", "nanf"};

	for (unsigned long i = 0; i < 4; i++) {
        
		if (this->_input == specialType[i]) {
			this->_specialType = true;
			return (true);
		}

	}
    
	if (isNumber() && this->_input[this->_input.length() - 1] == 'f') { // float: 2.00f, double: 2.00

		if (this->_precision > 1)
			this->_precision--; // for precision index correction
		return (true);

	}

	return (false);
    
}

void Converter::convert() {
    
	this->_type = checkDataType();
	long int tmpLongInt;

	switch (this->_type) {
        
	case TYPE_CHAR:
		
		this->_myChar = this->_input[0];
		this->_myInt = static_cast<int>(this->_myChar);
		this->_myFloat = static_cast<float>(this->_myChar);
		this->_myDouble = static_cast<double>(this->_myChar);
        
		break;
    
    /*____________________________________________________________________________________________________*/
    
	case TYPE_INT:
		
		tmpLongInt = atol(this->_input.c_str());
		
        if (this->_input.length() > 11 || tmpLongInt > std::numeric_limits<int>::max() 
            || tmpLongInt < std::numeric_limits<int>::min()) {
			this->_charOverflow = true;
			this->_intOverflow = true;
			this->_floatOverflow = true;
			this->_doubleOverflow = true;
		}
        
		if (tmpLongInt > std::numeric_limits<char>::max() || tmpLongInt < std::numeric_limits<char>::min())
			this->_charOverflow = true;
            
		this->_myInt = atoi(this->_input.c_str());
		this->_myChar = static_cast<char>(this->_myInt);
		this->_myFloat = static_cast<float>(this->_myInt);
		this->_myDouble = static_cast<double>(this->_myInt);
        
		break;
    
    /*____________________________________________________________________________________________________*/
    
	case TYPE_FLOAT:
		
		this->_myFloat = static_cast<float>(std::strtod(this->_input.c_str(), NULL));
		
        if (errno == ERANGE) {
			this->_charOverflow = true;
			this->_intOverflow = true;
			this->_floatOverflow = true;
		}
		
        tmpLongInt = static_cast<long>(this->_myFloat);
		
        if (this->_input.length() > 11 || tmpLongInt > std::numeric_limits<int>::max() 
            || tmpLongInt < std::numeric_limits<int>::min())
			this->_intOverflow = true;
		
        if (tmpLongInt > std::numeric_limits<char>::max() || tmpLongInt < std::numeric_limits<char>::min())
			this->_charOverflow = true;
		
        this->_myChar = static_cast<char>(this->_myFloat);
		this->_myInt = static_cast<int>(this->_myFloat);
		this->_myDouble = static_cast<double>(this->_myFloat);
        
		break;
        
    /*____________________________________________________________________________________________________*/
    
	case TYPE_DOUBLE:
    
		this->_myDouble = std::strtod(this->_input.c_str(), NULL);
        
		if (errno == ERANGE) {
			this->_charOverflow = true;
			this->_intOverflow = true;
			this->_floatOverflow = true;
			this->_doubleOverflow = true;
			break;
		}

		tmpLongInt = static_cast<long>(this->_myDouble);
        
		if (this->_input.length() > 11 || tmpLongInt > std::numeric_limits<int>::max() 
            || tmpLongInt < std::numeric_limits<int>::min())
			this->_intOverflow = true;
		
        if (tmpLongInt > std::numeric_limits<char>::max() || tmpLongInt < std::numeric_limits<char>::min())
			this->_charOverflow = true;
		
        this->_myFloat = static_cast<float>(this->_myDouble);
		this->_myChar = static_cast<char>(this->_myDouble);
		this->_myInt = static_cast<int>(this->_myDouble);
        
		break;
    
    /*____________________________________________________________________________________________________*/
    
	case INVALID_TYPE:
		this->_typeAsString = "invalid type\n";
		break;
    
    /*____________________________________________________________________________________________________*/
    
	default:
		this->_typeAsString = "ERROR!\n";
		break;
        
	}
}

void Converter::toChar(std::ostream &outputObj) const {

	if (this->_type == INVALID_TYPE) {
		outputObj << "invalid type";
		return ;
	}
    
	if (this->_specialType == true || this->_charOverflow == true)
        outputObj << "impossible";
	else if (isprint(_myChar) == false)
        outputObj << "not displayable";
	else
		outputObj << "'" << this->_myChar << "'";
        
}

void Converter::toInt(std::ostream &outputObj) const {
    
	if (this->_type == INVALID_TYPE) {
		outputObj << "invalid type";
		return ;
	}
    
	if (this->_specialType == true || this->_intOverflow == true)
		outputObj << "impossible";
	else
		outputObj << this->_myInt;
        
}

void Converter::toFloat(std::ostream &outputObj) const {

	if (this->_type == INVALID_TYPE) {
		outputObj << "invalid type";
		return ;
	}
    
	if (this->_floatOverflow == true)
		outputObj << "impossible";
	else
		outputObj << this->_myFloat << "f";
        
}

void Converter::toDouble(std::ostream &outputObj) const {

	if (this->_type == INVALID_TYPE) {
		outputObj << "invalid type";
		return ;
	}
    
	if (this->_doubleOverflow == true)
		outputObj << "impossible";
	else
	outputObj << this->_myDouble;

}