#ifndef SUBCOMMANDMINDETECT_H_
#define SUBCOMMANDMINDETECT_H_

#include "gqr.h"
#include "commands/SubcommandAbstract.h"

class SubcommandMinDetect: public SubcommandAbstract {
	public:
		SubcommandMinDetect(const std::vector<std::string>&);
		virtual ~SubcommandPathConistency();
		int run();
		
		static std::string helpString;

#endif /* SUBCOMMANDMINDETECT_H_ */
