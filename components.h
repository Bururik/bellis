/* 
attributes for car components
    gas tank
        capacity
    tires
        tire size
        tire model
    engine
        transmission type
        horsepower
*/

#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <string>

class GasTank {
public:
    // add setter
    int GetTankSpecs();
private:
    int MyTankCapacity;  
};


class Tires {
public:
    // add setter
    std::string GetTireSpecs();
private:
    int MyWheelDiameter;
    std::string MyTireBrand; 
};


class Engine {
public:
    // add setter
    std::string GetEngineSpecs();
private:
    int MyHorsepower;

    // Note: may want to make this a bool instead since there are only two options
    std::string MyTransmissionType; 
};

#endif