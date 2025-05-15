#ifndef SENSORINTERFACE_H
#define SENSORINTERFACE_H

class SensorInterface
{
public:
    virtual int getTemperature() = 0;
};

#endif