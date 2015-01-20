#include "commands/SubcommandDetectMin.h"

#include <cassert>
#include <iostream>
#include <sstream>

int SubcommandDetectMin::run() {
   std::cout << helpString;
   if (commandLine.empty())
      return 0;
   return 1;
}

std::string SubcommandDetectMin::helpString = std::string( "Hello World\n" );
