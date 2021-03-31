#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include "professor.h"
using namespace std;

namespace school {

    class Student {
        // ANOTHER IMPLEMENTATION
    };

}

namespace college {

    class Student {
    private:
        int id;
        string name;
        float grades[2] = {0.0, 0.0};
    public:
        // Constructor and Destructor
        Student(int id, string name);
        ~Student();

        // Getters
        int getId();
        string getName();
        float* getGrades();

        // Setters
        void setId(int id);
        void setName(string name);
        void setGrades(float grades[]);

        // Helpers
        float calcGradeAverage();

        // Friend Functions and Classes
        friend void Professor::changeStudentGrade(college::Student& a, float g1, float g2);
        // friend class Professor; -> would turn all the class Professor as a friend
    };

}

#endif