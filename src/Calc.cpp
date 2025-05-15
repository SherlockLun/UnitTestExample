#include "Calc.hpp"

Calc::Calc(ILogger *logger) : mLogger(logger)
{
}

int Calc::add(int a, int b)
{
    mLogger->logInfo("Add Calc1234: " + std::to_string(a) + " + " + std::to_string(b));
    return a + b;
}