#pragma once
#include "ILogger.hpp"

class Logger : public ILogger
{
public:
    void logInfo(const std::string &message) override;
    void logError(const std::string &message) override;
};