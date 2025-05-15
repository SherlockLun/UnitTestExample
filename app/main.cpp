#include "Display.h"
#include "Sensor.h"

int main()
{
    Sensor sensor;

    Display display(&sensor);
    display.showTemperature();
}