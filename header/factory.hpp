#pragma once
#include "IOperand.hpp"
#include "int8.hpp"

class Factory {
	public:
		Factory();
		~Factory();
		Factory(const Factory& other);
		Factory& operator=(const Factory& other);
		Factory(Factory&& other);
		Factory& operator=(Factory&& other);
	private:
		IOperand * createOperand(eOperandType type, const std::string& value);
};