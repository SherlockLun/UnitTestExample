#pragma once

#include <iostream>
#include "Sensorinterface.h"

class Display
{
public:
    Display(SensorInterface *sensor);
    int showTemperature();

private:
    SensorInterface *mSensor;
};