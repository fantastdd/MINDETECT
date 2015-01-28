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
#include "gqrtl/DFS.h"
#include "utils/Logger.h"
SubcommandDetectMin::SubcommandDetectMin(const std::vector<std::string>& a): SubcommandAbstract(a),
	unusedArgs(commandLine), calculus(NULL) {

 		if (!commandLine.empty()) {
 			calculus = readCalculus(unusedArgs);
 			if (!calculus)
 				return;
 		}
	co = new gqrtl::CalculusOperations<gqrtl::Relation8>(*calculus);
	}

int SubcommandDetectMin::run() {
	size_t nodeNum = 5;
	size_t labelSize = 2;

	iniCSP(nodeNum);
	makeRels(labelSize);
	makePairs(nodeNum);

	bool result = makeCSPs();
	if(result)
		std::cout << " CSP instance found\n";
	else
		std::cout << " No Valid Instance \n";

	//current_state->resetToLastState();

	gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > last_state = current_state->getCSP();

	std::cout << last_state.getSize()-1 << " " << last_state.name << std::endl;
	for (size_t i = 0; i < last_state.getSize(); ++i)
		for (size_t j = i+1; j < last_state.getSize(); ++j) {
			const gqrtl::Relation8& rel = last_state.getConstraint(i,j);
			if (rel != co->getUniversalRelation()) {
				std::cout << i << " " << j << " ";
				std::cout << co->getCalculus().relationToString(rel.getRelation());
				std::cout << std::endl;
			}
		}
		std::cout << ".\n";
	if (commandLine.empty())
		return 0;
	return 1;
}

void SubcommandDetectMin::makeRels(const size_t labelSize){
	unusedRels = calculus->getRelsCombos(labelSize);
}
bool SubcommandDetectMin::makeCSPs()
{

	while (!unusedPairs.empty())
	{	
		std::pair<size_t, size_t> lpair = unusedPairs.back();
		unusedPairs.pop_back();
		for (std::vector<Relation>::iterator it = unusedRels.begin(); it != unusedRels.end(); it++)
		{
			current_state->backupState();
			current_state->setConstraint(lpair.first, lpair.second, *it);
			//std::cerr << "1" << "2";
			//std::cout << "2";
			//copy_state.setConstraint(lpair.first, lpair.second, *it);
			//std::cout << 0;
			//copy_state.getCSP();
			
			//check path consistency
			bool path_consistent = true;
			
			path_consistent = (propagation.enforce(*current_state).empty());
			// check consistency
			
			//Logger* log = NULL;
			gqrtl::DFS<gqrtl::Relation8> search(current_state->getCSP(), NULL);
					
			if (path_consistent)
			{
				//If not a leaf
				if (!unusedPairs.empty())
				{
					//check consistency
					if (search.run() != NULL) //if consistent, go deeper
						if (makeCSPs())
							return true;
				}
				//If reach a leaf
				else 
				{
					// reach a leaf;
					if (search.run() == NULL)
				    {    
				    	return true;
				    }
		        }
			}
			
				//reset constraint;
				//std::cout << "Inconsistency, check another rel\n";
				current_state->resetToLastState();
			
		
		}

		//If all rels result in an inconsistency, jump back
		unusedPairs.push_back(lpair);
		return false;
	}

	//std::cout << "\n Reach the Maximum Depth\n";
	return false;
	//check consistency;
	//if not consistent, return this csp
	//check sub minimal network
}
void SubcommandDetectMin::makePairs(const size_t nodeNum){
	for (size_t i = 0; i < nodeNum - 1; i++)
		for (size_t j = i + 1; j < nodeNum; j++)
		{
			unusedPairs.push_back(std::make_pair(i, j));
	}
}


void SubcommandDetectMin::iniCSP(const size_t nodeNum)
{
	const std::string name = "csp_1";

	csp = new gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >(nodeNum, *co, name);

	current_state = new gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >(*csp);
	
}



SubcommandDetectMin::~SubcommandDetectMin() { delete calculus;}



