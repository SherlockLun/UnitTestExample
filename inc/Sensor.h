#ifndef SENSOR_H
#define SENSOR_H

#include "Sensorinterface.h"

class Sensor : public SensorInterface
{
public:
    Sensor();
    int getTemperature() override;
};

#endif