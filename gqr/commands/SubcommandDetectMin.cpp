#include "commands/SubcommandDetectMin.h"

#include <cassert>
#include <iostream>
#include <sstream>

#include "Calculus.h"
#include "Relation.h"
SubcommandDetectMin::SubcommandDetectMin(const std::vector<std::string>& a): SubcommandAbstract(a),
	unusedArgs(commandLine), calculus(NULL) {
 		if (!commandLine.empty()) {
		calculus = readCalculus(unusedArgs);
		if (!calculus)
			return;
}

	}

int SubcommandDetectMin::run() {
	// initialize the search tree.
	genCSP(1,2);
	std::vector<Relation> rels = calculus->getRelsCombos(1);
	std::cout << rels.size() << "\n";
	for (size_t i = 0; i < rels.size(); i++)
		std::cout << calculus->relationToString(rels[i]) <<",";
	std::cout << "\nend\n";
//	genRels(2,);
	if (commandLine.empty())
		return 0;
	return 1;
}
//void genRels(const size_t labelSize){
//	unusedRels
//}
void SubcommandDetectMin::genCSP(const size_t nodeNum, const size_t labelSize){
	std::cout << "Hello Wolrd in genCSP\n";
}



SubcommandDetectMin::~SubcommandDetectMin() { delete calculus;}



