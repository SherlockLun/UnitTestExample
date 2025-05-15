#pragma once
#include "ILogger.hpp"
#include <gmock/gmock.h>

class MockLogger : public ILogger
{
public:
    MOCK_METHOD(void, logInfo, (const std::string &message), (override));
    MOCK_METHOD(void, logError, (const std::string &message), (override));
};