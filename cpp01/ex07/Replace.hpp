//
// Created by casubmar on 23.11.2020.
//

#ifndef EX07_REPLACE_HPP
#define EX07_REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace {

public:
	Replace(char* filename, char* oldRow, char* newRow);
	~Replace();

	bool validateArgs() const;
	void replace();

private:
	std::string 	_filename;
	std::string 	_oldRow;
	std::string 	_newRow;
	std::ifstream 	_file;
};


#endif //EX07_REPLACE_HPP
