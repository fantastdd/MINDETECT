#include "commands/SubcommandDetectMin.h"

#include <cassert>
#include <iostream>
#include <sstream>

#include "Calculus.h"
#include "Relation.h"
#include "CSPSparse.h"
#include "gqrtl/CSP.h"
#include "gqrtl/CSPStack.h"
#include "gqrtl/RelationFixedBitset.h"
#include "gqrtl/RelationFixedBitset.h"

#include "gqrtl/WeightedTripleIterator.h"

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

	iniCSP(nodeNum);
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
		std::pair<size_t, size_t> lpair = unusedPairs.back();
		unusedPairs.pop_back();
		for (std::vector<Relation>::iterator it = unusedRels.begin(); it != unusedRels.end(); it++)
		{
			gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >  copy_state = *current_state;
			//current_state.setConstraint(lpair.first, lpair.second, *it);
			std::cout << "1" ;
			
			copy_state.setConstraint(lpair.first, lpair.second, *it);
			//std::cout << "2";
			//copy_state.getCSP();
			
			//check path consistency
			bool path_consistent = true;
			
			//path_consistent = (propagation.enforce(copy_state).empty());
			
			//std::cout << path_consistent;
			//if consistent, continue
		//}
		}
	}
	std::cout << "pass";
	//check consistency;
	//if not consistent, return this csp
	//check sub minimal network
}
void SubcommandDetectMin::makePairs(const size_t nodeNum){
	for (size_t i = 0; i < nodeNum - 1; i++)
		for (size_t j = i + 1; j < nodeNum; j++)
			unusedPairs.push_back(std::make_pair(i, j));
}


void SubcommandDetectMin::iniCSP(const size_t nodeNum)
{
	const std::string name = "csp_1";
	//Generate CSP

	csp = new gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >(nodeNum, *calculus, name);

	current_state = new gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >(*csp);
	//gqrtl::CSPStack state(*csp);
}



SubcommandDetectMin::~SubcommandDetectMin() { delete calculus;}



