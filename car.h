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

#ifndef COMPONENTS_H
#define COMPONENTS_H

#import <iostream>
#import <string>
#import "components.h"

class Car {
public:
    // turn into inhereted constructor
    Car(std::string model, int speed, int accel)
    : MyCarModel(model), MyTopSpeed(speed), MyAcceleration(accel)
    {  }
    // add getter and setter

private:
    std::string MyCarModel;
    int MyTopSpeed;
    int MyAcceleration;
};

#endif


// class Birthday {
//     public:
//         Birthday(int m, int d, int y)
//         : month(m), day(d), year(y)
//         {  }
//         void printDate()
//         {
//             cout<<month<<"/"<<day <<"/"<<year<<endl;
//         }
//     private:
//         int month;
//         int day;
//         int year;
// };