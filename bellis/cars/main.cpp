/* 
main.cpp : Defines the entry point for the console application.

tire size, max speed, transmission type, model, fuel capacity, fuel type
dodge durango
dodge durango
ferrari enzo
porsche carrera

custom input
*/

#include "stdafx.h"

#include <iostream>
#include "components.h"
#include "car.h"

int main()
{   
    Car Ferrari("Enzo",18, 1.2);

    std::cout << Ferrari.GetEngineSpecs() << std::endl;

    GasTank gt;
    gt.GetTankSpecs();
    std::cout << "These are the gas tank specs: " << gt.GetTankSpecs() << std::endl;
    
    // initialize car object

    // output text specifications from car objects

    // using inputs we will also create a new car object

    // print out contents of new car object

    return 0;
}

// #include <pybind11/pybind11.h>

// int add(int i, int j) {
// 	return i + j;
// }

// PYBIND11_MODULE(example, m) {
// 	m.doc() = "pybind11 example plugin"; // optional module docstring

// 	m.def("add", &add, "A function which adds two numbers");
// }