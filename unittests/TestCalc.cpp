#include "Calc.hpp"
#include "mock/MockLogger.hpp"

TEST(TestCalc, AddInfo)
{
    MockLogger mockLogger;
    Calc calc(&mockLogger);

    EXPECT_CALL(mockLogger, logInfo("Add Calc1234: 3 + 4")).Times(1);

    int result = calc.add(3, 4);
    EXPECT_EQ(result, 7);
}