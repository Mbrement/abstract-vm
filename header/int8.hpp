#pragma once

#include "Operand.hpp"
#include <cstdint>

class Int8 : public Operand<int8_t> {
public:
	Int8();
	Int8(const Int8& other);
	Int8& operator=(const Int8& other);
	IOperand const * operator+( IOperand const & data ); // Sum
	IOperand const * operator-( IOperand const & data ); // Difference
	IOperand const * operator=( IOperand const & data ); // Equal
	IOperand const * operator*( IOperand const & data ); // Product
	IOperand const * operator/( IOperand const & data ); // Quotient
	IOperand const * operator%( IOperand const & data ); // Modulo
	std::string const & toString( void )const; // String representation of the instance
	~Int8();
	
	int _precision;
	eOperandType _type;
	int8_t _value;
};
