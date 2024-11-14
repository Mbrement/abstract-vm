#include <iostream>

class VM {
public:
	VM();
	~VM();
	VM(const VM& other);
	VM& operator=(const VM& other);
	VM(VM&& other);
	VM& operator=(VM&& other);
};