#include "display.h"

Display::Display()
{
    std::cout << "Display Constructor created" << std::endl;
}

int Display::getTemperature()
{
    int temp = 24;
    std::cout << "Display: Getting temperature: " << temp << std::endl;
    return temp;
}