#include "Calc.hpp"
#include "Logger.hpp"

int main()
{
    Logger logger;

    Calc calc(&logger);
    int result = calc.add(3, 4);

    // logger.logInfo("Adding 3 and 4");
    logger.logInfo("Result: " + std::to_string(result));
}