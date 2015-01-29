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
         //typedef gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > CSPRep;
    	 std::vector<std::string> unusedArgs;
    	 const Calculus* calculus;
         const gqrtl::CalculusOperations<gqrtl::Relation8>* co;
         size_t count, total;
         gqrtl::Relation8 uni; 
    	 std::vector<Relation> unusedRels;
    	 std::vector<std::pair <std::size_t, std::size_t> > unusedPairs;

       
    	 gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >* csp;

         gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >*  current_state;


         //gqrtl::WeightedTripleIterator<gqrtl::Relation8, gqrtl::CSPStack<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > > propagation;
         gqrtl::WeightedTripleIterator<gqrtl::Relation8, gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > > propagation;
 
     	 void iniCSP(const size_t nodeNum, const size_t labelSize);
     	 void makeRels (const size_t labelSize);
     	 void makePairs(const size_t nodeNum);
     	 bool makeCSPs();
         bool isMinimum(gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> >& csp);

         typedef gqrtl::CSP<gqrtl::Relation8, gqrtl::CalculusOperations<gqrtl::Relation8> > CSPRep;
         void reportCSP(const CSPRep& last_state){
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
         }
	public:
        SubcommandDetectMin(const std::vector<std::string>&);
        virtual ~SubcommandDetectMin(); 
	    int run();

};
#endif
