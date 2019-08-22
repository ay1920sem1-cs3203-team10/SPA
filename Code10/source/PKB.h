#pragma once

#include<stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef short PROC;
typedef int INDEX;
typedef int INTEGER;

class TNode;

class VarTable;  // no need to #include "VarTable.h" as all I need is pointer

class PKB {
public:
	static VarTable* varTable;
	static int setProcToAST(PROC p, TNode* r);
	static TNode* getRootAST(PROC p);

	INDEX insertVariable(std::string variableName);
	std::string getVariableName(INDEX index);
	INDEX getVariableIndex(std::string variableName);
	INTEGER getSize();
	std::unordered_map<std::string, INTEGER> PKB::getVariables()
};
