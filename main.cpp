/*
tire size, max speed, transmission type, model, fuel capacity, fuel type
dodge durango
ferrari enzo
porsche carrera

custom input
*/
# include <iostream>
#include "components.h"

int main()
{   

    GasTank gt;
    gt.GetTankSpecs();
    std::cout << "These are the gas tank specs: " << gt.GetTankSpecs() << std::endl;
    // initialize car object

    // output text specifications from car objects

    // using inputs we will also create a new car object

    // print out contents of new car object

    return 0;
}