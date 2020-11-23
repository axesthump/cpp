#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* pToStr = &str;
	std::string& refToStr = str;

	std::cout << *pToStr << std::endl;
	std::cout << refToStr << std::endl;
	return 0;
}
