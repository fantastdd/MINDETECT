#ifndef SUBCOMMANDDETECTMIN_H_
#define SUBCOMMANDDETECTMIN_H_

#include "gqr.h"
#include "commands/SubcommandAbstract.h"

class SubcommandDetectMin: public SubcommandAbstract{
    private:
    	 std::vector<std::string> unusedArgs;
    	 Calculus* calculus;
    	 std::vector<std::size_t> unusedRels;
       	 void genCSP(const size_t nodeNum, const size_t labelSize);
	public:
        SubcommandDetectMin(const std::vector<std::string>&);
        virtual ~SubcommandDetectMin(); 
	    int run();

};
#endif
