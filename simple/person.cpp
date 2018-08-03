#include <iostream>
#include "birthday.h"
#include "person.h"

Person::Person(std::string n, Birthday b)
: name(n), bd(b) {  }

void Person::printInfo()
{
    std::cout << name << std::endl;
    bd.printDate();
}
