#pragma once

#include <string>
#include <vector>

using namespace std;

class Parser {
public:
	Parser();
	int Parse(string line);
private:
	void addVarPKB(string variable);
};