#include "Display.h"

Display::Display(SensorInterface *sensor) : mSensor(sensor)
{
    std::cout << "Display Constructor created" << std::endl;
}

int Display::showTemperature()
{
    int temp = mSensor->getTemperature();
    std::cout << "Display: Temperature is " << temp << std::endl;

    return temp;
}