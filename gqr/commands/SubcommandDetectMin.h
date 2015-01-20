#ifndef SUBCOMMANDDETECTMIN_H_
#define SUBCOMMANDDETECTMIN_H_

#include "gqr.h"
#include "commands/SubcommandAbstract.h"

class SubcommandDetectMin: public SubcommandAbstract {
	public:
       static std::string helpString;
       SubcommandDetectMin(const std::vector<std::string>& a) : SubcommandAbstract(a) { }
       virtual ~SubcommandDetectMin() { }
	   int run();


};
#endif
