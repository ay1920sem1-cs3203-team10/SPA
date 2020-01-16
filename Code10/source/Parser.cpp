#include<stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

#include "PKB.h"
#include "TNode.h"
#include "Parser.h"

Parser::Parser() {
	// constructor

}

int Parser::Parse(string line) {
	cout << line << endl;
	istringstream iss(line);
	vector<string> tokens((istream_iterator<string>(iss)),
		istream_iterator<string>());

	string prevVal;
	for (auto i = tokens.begin(); i != tokens.end(); ++i) {
		if (*i == "=") {
			addVarPKB(prevVal);
		}
		prevVal = *i;
	}
	return 0;
}

void Parser::addVarPKB(string variable) {
	cout << "adding variable " << variable << " to PKB..." << endl;
}
