#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main() {

    Student s1(123, "João");
    float g[2] = {10, 8.5};
    s1.setGrades(g);

    cout << s1.calcGradeAverage() << endl;

    return 0;

}