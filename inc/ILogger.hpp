#pragma once
#include <string>

class ILogger
{
public:
    virtual void logInfo(const std::string &message) = 0;
    virtual void logError(const std::string &message) = 0;
};