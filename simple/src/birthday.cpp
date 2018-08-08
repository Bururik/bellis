#include <iostream>
#include "birthday.h"

Birthday::Birthday(int m, int d, int y)
: month(m), day(d), year(y) {  }

void Birthday::printDate()
{
    std::cout<<month<<"/"<<day <<"/"<<year<<std::endl;
}


// #include <pybind11/pybind11.h>

// namespace py = pybind11;

// PYBIND11_MODULE(birthday, m) {
//     py::class_<Birthday>(m, "Birthday")
//         .def(py::init<int, int, int &>())
//         .def("printDate", &Birthday::printDate);
// }