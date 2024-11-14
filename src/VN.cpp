#include <iostream>

class VM {
public:
	// Constructor
	VM() {
		std::cout << "VM created" << std::endl;
	}

	// Destructor
	~VM() {
		std::cout << "VM destroyed" << std::endl;
	}

	// Copy constructor
	VM(const VM& other) {
		std::cout << "VM copied" << std::endl;
	}

	// Copy assignment operator
	VM& operator=(const VM& other) {
		if (this != &other) {
			std::cout << "VM assigned" << std::endl;
		}
		return *this;
	}

	// Move constructor
	VM(VM&& other) noexcept {
		std::cout << "VM moved" << std::endl;
	}

	// Move assignment operator
	VM& operator=(VM&& other) noexcept {
		if (this != &other) {
			std::cout << "VM move-assigned" << std::endl;
		}
		return *this;
	}
};
