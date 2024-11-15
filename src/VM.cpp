#include <iostream>
#include "../header/VM.hpp"

	// Constructor
	VM::VM() {
		std::cout << "VM created" << std::endl;
	}

	// Destructor
	VM::~VM() {
		std::cout << "VM destroyed" << std::endl;
	}

	// Copy constructor
	VM::VM(const VM& other) {
		(void)other;
		std::cout << "VM copied" << std::endl;
	}

	// Copy assignment operator
	VM& VM::operator=(const VM& other) {
		if (this != &other) {
			std::cout << "VM assigned" << std::endl;
		}
		return *this;
	}

