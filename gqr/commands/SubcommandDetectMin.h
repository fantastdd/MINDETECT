#ifndef SUBCOMMANDDETECTMIN_H_
#define SUBCOMMANDDETECTMIN_H_

#include "gqr.h"
#include "gqrtl/CSP.h"
#include "gqrtl/WeightedTripleIterator.h"
#include "gqrtl/CSPStack.h"
#include "commands/SubcommandAbstract.h"
#include "gqrtl/RelationFixedBitset.h"
#include "gqrtl/CalculusOperations.h"



class SubcommandDetectMin: public SubcommandAbstract{
    private:
    	 std::vector<std::string> unusedArgs;
    	 const Calculus* calculus;
    	 std::vector<Relation> unusedRels;
    	 std::vector<std::pair <std::size_t, std::size_t> > unusedPairs;

       
    	 gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >* csp;

         gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >*  current_state;

         gqrtl::WeightedTripleIterator<gqrtl::Relation8, gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > > propagation;

     	 void iniCSP(const size_t nodeNum);
     	 void makeRels (const size_t labelSize);
     	 void makePairs(const size_t nodeNum);
     	 void makeCSPs();
	public:
        SubcommandDetectMin(const std::vector<std::string>&);
        virtual ~SubcommandDetectMin(); 
	    int run();

};
#endif
