#include <gtest/gtest.h>
#include "calc.hpp"

class CalcTest : public ::testing::Test
{
protected:
    Calc *calc;

    void SetUp() override
    {
        // Code to set up the test environment before test
        calc = new Calc();
    }

    void TearDown() override
    {
        // Code to clean up after tests
        delete calc;
    }
};

TEST_F(CalcTest, AddTestAdvanced)
{
    EXPECT_EQ(calc->add(3, 4), 7);
}

TEST_F(CalcTest, AddZeroAdvanced)
{
    EXPECT_EQ(calc->add(0, 0), 0);
}