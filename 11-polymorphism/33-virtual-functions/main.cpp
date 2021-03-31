#include <iostream>
#include <string>
#include "student.h"
using namespace std;
using namespace college;

int main() {

    Student *s1 = new Student("Maria");
    // StudentResearcher *s2 = new StudentResearcher("João"); -> call the overrided method
    Student *s2 = new StudentResearcher("João"); // if method is not virtual, still call the base class method

    s1->printHello();

    // Early binding VS Late binding
    // we declare the method in Student class as virtual
    s2->printHello();

    return 0;

}