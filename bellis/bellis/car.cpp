// #pragma once

// #include "stdafx.h"

#include <iostream>
#include "car.h"

Car::Car(std::string model, int speed, float accel)
:MyCarModel(model), MyTopSpeed(speed), MyAcceleration(accel) { }

void Car::SetEngineSpecs(std::string model_, int speed_, float accel_)
{
	MyCarModel = model_;
	MyTopSpeed = speed_;
	MyAcceleration = accel_;
	
	return;
}

std::string Car::GetEngineSpecs() const
{
	std::string MyEngineSpecs = "Model: " + MyCarModel \
	+ " Top Speed: " + std::to_string(MyTopSpeed) \
	+ " Acceleration: " + std::to_string(MyAcceleration); 

	return MyEngineSpecs;
}
