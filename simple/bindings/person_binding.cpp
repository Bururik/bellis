#include <pybind11/pybind11.h>
#include "person.h"

namespace py = pybind11;

PYBIND11_MODULE(person, m) {
    py::class_<Person>(m, "Person")
        .def(py::init<std::string, Birthday &>())
        .def("printInfo", &Person::printInfo);
}