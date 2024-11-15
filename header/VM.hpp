#pragma once	

#include "factory.hpp"
#include <iostream>

class VM {
public:
	VM();
	~VM();
	VM(const VM& other);
	VM& operator=(const VM& other);
};