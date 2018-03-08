#include "lib.h"

#include <spdlog/spdlog.h>

int main(int argc, char *argv[]) {
   std::cout<< "Hello, World!" << std::endl;
   auto logger = spdlog::stdout_logger_mt("console");
   logger->info("Current patch version is {}", getPatchVersion());
   return 0;
}
