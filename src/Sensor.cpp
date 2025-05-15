#include "Sensor.h"
#include <iostream>

Sensor::Sensor()
{
    std::cout << "Sensor Constructor created" << std::endl;
}

int Sensor::getTemperature()
{
    return 24;
}