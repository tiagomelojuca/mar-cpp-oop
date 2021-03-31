#include "professor.h"

Professor::Professor() {
    // The Constructor implementation goes here
}

Professor::~Professor() {
    // The Destructor implementation goes here
}

void Professor::changeStudentGrade(college::Student& a, float g1, float g2) {
    a.grades[0] = g1;
    a.grades[1] = g2;
}