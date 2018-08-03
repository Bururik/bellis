#include "stdafx.h"

#include <iostream>
#include "components.h"

int GasTank::GetTankSpecs()
{
    MyTankCapacity = 7;
    // std::cout << "The Tank's capacity is: " << MyTankCapacity << " Liters" << std::endl;
    return MyTankCapacity;
}

std::string Tires::GetTireSpecs()
{
    MyWheelDiameter = 15;
    MyTireBrand = "Firestone";
    return MyTireBrand;
}

std::string Engine::GetEngineSpecs()
{
    MyHorsepower = 293;
    MyTransmissionType = "Automatic";
    return MyTransmissionType;
}
