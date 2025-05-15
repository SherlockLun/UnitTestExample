#include "display.h"
#include "sensorinterface.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::Return;

class MockSensor : public SensorInterface
{
public:
    MOCK_METHOD(int, getTemperature, (), (override));
};

class DisplayTest : public ::testing::Test
{
protected:
    MockSensor mockSensor;
    // Display *display;

    void SetUp() override
    {
        // display = new Display();
    }

    void TearDown() override
    {
        // delete display;
    }
};

TEST_F(DisplayTest, GetTemperature)
{
    EXPECT_CALL(mockSensor, getTemperature()).WillOnce(Return(24));

    int temp = mockSensor.getTemperature();
    EXPECT_EQ(temp, 24);
}