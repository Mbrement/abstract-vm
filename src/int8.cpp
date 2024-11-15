#include "../header/int8.hpp"


Int8::Int8() {
	std::cout << "Int8 created" << std::endl;
}

Int8::~Int8() {
	std::cout << "Int8 destroyed" << std::endl;
}

Int8::Int8(const Int8& other) {
	(void)other;
	std::cout << "Int8 copied" << std::endl;
}

class Int8	&Int8::operator=(const Int8 &other){
	if (this != &other) {
		std::cout << "Int8 assigned" << std::endl;
	}
	return *this;
}

// class Int8 const * Int8::operator+( IOperand const & data ) 
// {
// 			if (data.getPrecision() > this->_precision)
// 			{
// 				;
// 			}
// 			else
// 			{
// 				data._value = static_cast<int8_t>(data._value) + this->_value;
// 				delete data;
// 				return this;
// 			}
// }