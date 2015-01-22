#ifndef SUBCOMMANDDETECTMIN_H_
#define SUBCOMMANDDETECTMIN_H_

#include "gqr.h"
#include "CSPSparse.h"
#include "commands/SubcommandAbstract.h"

class SubcommandDetectMin: public SubcommandAbstract{
    private:
    	 std::vector<std::string> unusedArgs;
    	 const Calculus* calculus;
    	 std::vector<Relation> unusedRels;
    	 std::vector<std::pair <std::size_t, std::size_t> > unusedPairs;
       CSPSparse* csp;


     	 void genCSP(const size_t nodeNum);
     	 void makeRels (const size_t labelSize);
     	 void makePairs(const size_t nodeNum);
     	 void makeCSPs();
	public:
        SubcommandDetectMin(const std::vector<std::string>&);
        virtual ~SubcommandDetectMin(); 
	    int run();

};
#endif
