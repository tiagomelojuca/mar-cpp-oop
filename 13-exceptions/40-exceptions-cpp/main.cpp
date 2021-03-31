#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;
using namespace college;

bool compareId(Student a, Student b) {
    if(a.getId() > b.getId()) {
        return true;
    }

    return false;
}

int main() {

    Student a("João");
    Professor p;

    // try {
    //     p.changeStudentGrade(a, -50, 1);
    // } catch(...) {
    //     cout << "Exception handle" << endl;
    // }

    try {
        p.changeStudentGrade(a, -50, 1);
    } catch(const char* msg) {
        cout << msg << endl;
    }

    return 0;

}