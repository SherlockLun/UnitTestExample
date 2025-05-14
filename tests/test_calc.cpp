#include <gtest/gtest.h>
#include "calc.hpp"

TEST(CalcTestBasic, AddTest)
{
    Calc calc;
    EXPECT_EQ(calc.add(3, 4), 7);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
    EXPECT_EQ(calc.add(-1, -1), -2);
}