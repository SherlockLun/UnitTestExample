#include <iostream>
#include "calc.hpp"

int main()
{
    Calc calc;

    int result = calc.add(3, 4);
    std::cout << "Result: " << result << std::endl;
}