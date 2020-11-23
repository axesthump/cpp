#include <iostream>
#include <fstream>
#include "Replace.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Bad args!\n";
		return (1);
	}
	Replace replace(argv[1], argv[2], argv[3]);
	if (!replace.validateArgs()) {
		return (1);
	}
	replace.replace();
	return (0);
}
