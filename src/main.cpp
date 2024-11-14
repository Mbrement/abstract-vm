#include "VM.hpp"


int main(int argc, char **argv) {
	if (argc > 2) {
		std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
		std::cerr << "Or   : " << argv[0] << " then list your code and conclude by ;;" << std::endl;
		return 1;
	}

	// VM vm;
	// if (!vm.load(argv[1])) {
	// 	return 1;
	// }

	// vm.run();
	return 0;
}