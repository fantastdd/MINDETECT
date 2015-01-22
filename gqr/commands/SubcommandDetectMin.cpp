#include "commands/SubcommandDetectMin.h"

#include <cassert>
#include <iostream>
#include <sstream>

#include "Calculus.h"
#include "Relation.h"
#include "CSPSparse.h"
SubcommandDetectMin::SubcommandDetectMin(const std::vector<std::string>& a): SubcommandAbstract(a),
	unusedArgs(commandLine), calculus(NULL) {
 		if (!commandLine.empty()) {
 			calculus = readCalculus(unusedArgs);
 			if (!calculus)
 				return;
 		}

	}

int SubcommandDetectMin::run() {
	size_t nodeNum = 4;
	size_t labelSize = 2;

	genCSP(nodeNum);
	makeRels(labelSize);
	makePairs(nodeNum);

	makeCSPs();

	
//	genRels(2,);
	if (commandLine.empty())
		return 0;
	return 1;
}

void SubcommandDetectMin::makeRels(const size_t labelSize){
	unusedRels = calculus->getRelsCombos(labelSize);
	/*** print rels 

	for (size_t i = 0; i < unusedRels.size(); i++)
		std::cout << calculus->relationToString(unusedRels[i]) <<",";
	std::cout << "\nend\n";
	***/
}
void SubcommandDetectMin::makeCSPs()
{
	while (!unusedPairs.empty())
	{	
		std::pair<size_t, size_t> lpair = unusedPairs.pop_back();
		for (auto rel : unusedRels)
		{

			constraint = (pair, rel);
			check path consistency
			if consistent, continue
		}

	}
	//check consistency;
	//if not consistent, return this csp
	//check sub minimal network
}
void SubcommandDetectMin::makePairs(const size_t nodeNum){
	for (size_t i = 0; i < nodeNum - 1; i++)
		for (size_t j = i + 1; j < nodeNum; j++)
			unusedPairs.push_back(std::make_pair(i, j));
}


void SubcommandDetectMin::genCSP(const size_t nodeNum)
{
	const std::string name = "csp_1";
	//Generate CSP
	csp = new CSPSparse(nodeNum, *calculus, name);
}



SubcommandDetectMin::~SubcommandDetectMin() { delete calculus;}



