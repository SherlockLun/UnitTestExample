#pragma once

#include "ILogger.hpp"

class Calc
{
public:
    Calc(ILogger *logger);

    int add(int a, int b);

private:
    ILogger *mLogger;
};