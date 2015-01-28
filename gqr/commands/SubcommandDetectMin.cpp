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

	makeRels(labelSize);
	iniCSP(nodeNum, labelSize);

	makePairs(nodeNum);

	bool result = makeCSPs();
	if(result)
		std::cout << " CSP Instance Found\n";
	else
		std::cout << " No Valid Instance \n";

	current_state->resetToLastState();

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
			
			current_state->setConstraint(lpair.first, lpair.second, *it);

			current_state->backupState();
			//check path consistency
			bool path_consistent = true;			
			//path_consistent = (propagation.enforce(*current_state).empty());
			gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > _csp = current_state->getCSP();
			path_consistent = (propagation.enforce(_csp)).empty();
					
			if (path_consistent)
			{
				// check consistency
		 	    //Logger* log = NULL;
				gqrtl::DFS<gqrtl::Relation8> search(_csp, NULL);
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
				    	if(isMinimum(_csp))
				        //check minimum consistency
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

bool SubcommandDetectMin::isMinimum(const gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >& csp){

	gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > state(csp);
	gqrtl::Relation8 uni = co->getUniversalRelation(); 
	for (size_t i = 0; i < csp.getSize() - 1; i ++ )
		for (size_t j = i; j < csp.getSize(); j ++ )
		{
			//remove the constraint
			state.backupState();
			state.setConstraint(i, j, uni);
			gqrtl::DFS<gqrtl::Relation8> search(state.getCSP(), NULL);
			if (!search.run())
				return false;
			state.resetToLastState();

		}
	
	return true;
}

void SubcommandDetectMin::makePairs(const size_t nodeNum){
	for (size_t i = 0; i < nodeNum - 1; i++)
		for (size_t j = i + 1; j < nodeNum; j++)
		{
			unusedPairs.push_back(std::make_pair(i, j));
	}
}


void SubcommandDetectMin::iniCSP(const size_t nodeNum, const size_t labelSize)
{
	std::ostringstream stringStream;
	stringStream << "#" << (nodeNum - 1) << "-N" << nodeNum << "-D" << (nodeNum - 1) << "-L" << labelSize;
	
	const std::string name = stringStream.str();
	csp = new gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >(nodeNum, *co, name);

	current_state = new gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >(*csp);
	
}



SubcommandDetectMin::~SubcommandDetectMin() { 
	delete calculus;
	delete csp;
	delete current_state;
}



