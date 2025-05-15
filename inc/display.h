#pragma once

#include <iostream>
#include "sensorinterface.h"

class Display : public SensorInterface
{
public:
    Display();
    int getTemperature() override;
};