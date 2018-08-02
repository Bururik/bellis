/*
attributes for car type
    model
    top speed
    acceleration
*/

#ifndef COMPONENTS_H
#define COMPONENTS_H

#import <string>
#import "components.h"

class Car {
public:
    // inhereted constructor
    // add getter and setter
private:
    std::string MyCarModel;
    int MyTopSpeed;
    int MyAcceleration;
};

#endif