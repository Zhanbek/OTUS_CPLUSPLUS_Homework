#include "lib.h"
#include "version.h"
#include <spdlog/spdlog.h>

int main(int argc, char *argv[]) {
   std::clog<< "Hello, World!" << std::endl;    
   
   auto logger = spdlog::stdout_logger_mt("console");
   logger->info("Current patch version is {}", 
                getVersionPatch()
               );
   return 0;
}
