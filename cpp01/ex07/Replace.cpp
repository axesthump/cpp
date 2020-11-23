//
// Created by casubmar on 23.11.2020.
//

#include "Replace.hpp"
#include <iostream>
#include <fstream>
#include <string>

Replace::Replace(char *filename, char *oldRow, char *newRow):
	_filename(filename), _oldRow(oldRow), _newRow(newRow) {
	this->_file.open(filename);
}

Replace::~Replace() { ; }

bool Replace::validateArgs() const {
	if (this->_filename.empty()) {
		std::cerr << "Empty filename!\n";
		return (false);
	} else if (!this->_file.is_open()) {
		std::cerr << "Bad filename!\n";
		return (false);
	}
	return (true);
}

void Replace::replace() {
	std::string newFileName = _filename + ".replace";
	const char *nfn = newFileName.c_str();
	std::string temp;
	std::string::size_type start;

	std::ofstream newFile(nfn);
	while (std::getline(this->_file, temp)) {
		if ((start = temp.find(this->_oldRow)) != std::string::npos) {
			temp.replace(start, this->_oldRow.size(), this->_newRow);
			start += this->_newRow.size();
		}
		newFile << temp << std::endl;
	}
}