// #pragma once
/*
Sample code:
```
struct Pet {
public:
    Pet(const std::string &name) : name(name) { }
    void setName(const std::string &name_) { name = name_; }
    const std::string &getName() const { return name; }
private:
    std::string name;
};
```
attributes for car type
    model
    top speed
    acceleration
*/

#ifndef CAR_H
#define CAR_H

// #include "stdafx.h"

#include <iostream>
#include <string>
#include "components.h"

class Car {
public:
    // turn into inhereted constructor
	Car(std::string model, int speed, float accel);
    // add getter and setter
    void SetEngineSpecs(std::string model_, int speed_, float accel_);
	std::string GetEngineSpecs() const;

private:
    std::string MyCarModel;
    int MyTopSpeed;
    float MyAcceleration;
};

#endif
