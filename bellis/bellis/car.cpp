#pragma once

#include "stdafx.h"

#include <iostream>
#include "car.h"

Car::Car(std::string model, int speed, int accel)
:MyCarModel(model), MyTopSpeed(speed), MyAcceleration(accel)
{

}

std::string Car::GetEngineSpecs()
{
	return std::string();
}
