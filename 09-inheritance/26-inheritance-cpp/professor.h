#include "student.h"

#ifndef PROFESSOR_H_
#define PROFESSOR_H_

// #include "student.h"
// 
// does NOT work if you put the include here
// I was using it here, after the Header Guard, spent a half of hour
// trying to figure out why the compiler was still complaining
// about the visibility, even declaring the friend method in student.h
// 
// it was necessary to move the include statement to BEFORE the hguard,
// then finally it have worked fine...
//
// probably, something related to the Header Guard and the its relation
// with the Forward Declaration Class, coz the compiler needs to know
// about the friend function before its definition
// Later, I'll think better why
// TODO: investigate why

// Forward Declaration Class
namespace college {
    class Student;
}
// NOTE:
// if Student were outside a namespace,
// the following would be enough
// class Student;

class Professor {
public:
    Professor();
    ~Professor();

    void changeStudentGrade(college::Student& a, float g1, float g2);
};

#endif