/*

    $ g++ -O3 -Wall main.cpp birthday.cpp person.cpp -std=c++17 -o main.out

*/

#include <iostream>
#include "birthday.h"
#include "person.h"

int main() {
    Birthday bd(2, 21, 1985);
    Person p("David", bd);
    p.printInfo();
}

