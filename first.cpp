#include "lib.h"
#include "version.h"
#include <spdlog/spdlog.h>

int main(int argc, char *argv[]) {
   std::clog<< "Hello, World!" << std::endl;    
   
   #ifdef DEBUG_MODE
       auto logger = spdlog::stdout_logger_mt("console");
       logger->info("Current patch version is {}.{}.{}", 
                 getVersionMajor(),
                 getVersionMinor(),
                 getVersionPatch()
               );
   #endif

   return 0;
   
}
