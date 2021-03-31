#include "professor.h"

Professor::Professor() {
    // The Constructor implementation goes here
}

Professor::~Professor() {
    // The Destructor implementation goes here
}

void Professor::changeStudentGrade(college::Student& a, float g1, float g2) {

    if(g1 < 0 || g1 > 10 || g2 < 0 || g2 > 10) {
        throw "Values outside the range from 0 to 10";
    }

    a.grades[0] = g1;
    a.grades[1] = g2;
}