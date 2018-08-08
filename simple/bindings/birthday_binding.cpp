#include <pybind11/pybind11.h>
#include "birthday.h"

namespace py = pybind11;

PYBIND11_MODULE(birthday, m) {
    py::class_<Birthday>(m, "Birthday")
        .def(py::init<int, int, int &>())
        .def("printDate", &Birthday::printDate);
}