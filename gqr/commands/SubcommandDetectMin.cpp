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


	Logger* log = new Logger("log", 3 * 1000);
	log->start();

	size_t nodeNum = 5;
	size_t labelSize = 2;

	makeRels(labelSize);

	iniCSP(nodeNum, labelSize);

	makePairs(nodeNum);
	uni = co->getUniversalRelation();

	count = 0;

	
	bool result = makeCSPs();
	if(result){
		std::cout << " CSP Instance Found\n";
		current_state->resetToLastState();
		gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > last_state = current_state->getCSP();

		reportCSP(last_state);
		//std::cout << "is minimum: " << isMinimum(last_state);
		//reportCSP(last_state);

	}
	else{
		std::cout << " No Such Instance \n";
	}
	log->end();
	log->reportPassedTime();

	delete log;
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
		//std::cout << unusedPairs.size() << "  " << total -1 << (unusedPairs.size() == total - 1);
		if (unusedPairs.size() == total - 1)
			std::cerr << " switch to branch " << ++ count;


		for (std::vector<Relation>::iterator it = unusedRels.begin(); it != unusedRels.end(); it++)
		{
			
			current_state->setConstraint(lpair.first, lpair.second, *it);
			current_state->backupState();

			//check path consistency
			bool path_consistent = true;			
			//path_consistent = (propagation.enforce(*current_state).empty());
			gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > _csp = current_state->getCSP(); //assign the value to _csp, does not affect the const value returned by ->getCSP()
			path_consistent = (propagation.enforce(_csp)).empty();

			if (path_consistent)
			{
				// check consistency
		 	    //Logger* log = NULL;
				
				//If not a leaf
				if (!unusedPairs.empty())
				{

					//check consistency
					//if (search.run() != NULL) //if consistent, go deeper
						if (makeCSPs())
							return true;
				}
				//If reach a leaf
				else 
				{
					gqrtl::DFS<gqrtl::Relation8> search(_csp, NULL);
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

bool SubcommandDetectMin::isMinimum(gqrtl::CSP<gqrtl::Relation8,  gqrtl::CalculusOperations<gqrtl::Relation8> >& csp) {

	//gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > state(csp);
	
	for (size_t i = 0; i < csp.getSize() - 1; i ++ )
		for (size_t j = i + 1; j < csp.getSize(); j ++ )
		{
			//remove the constraint
			//std::cout << "before i " << i <<  " j " << j << "\n";
			//reportCSP(state.getCSP());
			//state.backupState();
			gqrtl::Relation8 rel = csp.getConstraint(i, j);
			csp.setConstraint(i, j, uni);
			//const gqrtl::Relation8 _uni = uni;
			//const Relation rel = calculus->encodeRelation("TPP");
			
			
			
			gqrtl::DFS<gqrtl::Relation8> search(csp, NULL);
			if (!search.run())
				return false;
			csp.setConstraint(i, j, rel);
			//state.resetToInitialState();
			//std::cout << "after restore\n";
			//reportCSP(state.getCSP());

		}
	
	return true;
}

void SubcommandDetectMin::makePairs(const size_t nodeNum){
	for (size_t i = 0; i < nodeNum - 1; i++)
		for (size_t j = i + 1; j < nodeNum; j++)
		{
			unusedPairs.push_back(std::make_pair(i, j));
	}
	total = unusedPairs.size();

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

