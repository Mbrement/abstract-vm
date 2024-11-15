#pragma once	
#include <iostream>
#include "IOperand.hpp"

template <typename T>
class Operand : public IOperand {
	public:
		virtual int getPrecision( void )const {
			return _precision;
		}; 
		virtual eOperandType getType( void ) const {
			return _type;
		};
		virtual T getValue( void ) const {
			return _value;
		};
		virtual Operand const * operator+( Operand const & data ) const = 0; // Sum
		virtual Operand const * operator-( Operand const & data ) const = 0; // Difference
		virtual Operand const * operator=( Operand const & data ) const = 0; // Equal
		virtual Operand const * operator*( Operand const & data ) const = 0; // Product
		virtual Operand const * operator/( Operand const & data ) const = 0; // Quotient
		virtual Operand const * operator%( Operand const & data ) const = 0; // Modulo
		virtual std::string const & toString( void ) const = 0; // String representation of the instance
		virtual ~Operand();

		int _precision;
		eOperandType _type;
		T _value;
};

