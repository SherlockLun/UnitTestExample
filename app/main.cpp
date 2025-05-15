#include "display.h"

int main()
{
    Display display;
    int temp = display.getTemperature();

    std::cout << "main(): Temperature is " << temp << std::endl;
}