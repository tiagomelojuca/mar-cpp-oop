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
        static int nextId;
    protected:
        double monthlyPayment;
    public:
        // Constructor and Destructor
        Student(string name);
        ~Student();

        // Getters
        int getId();
        string getName();
        float* getGrades();

        // Setters
        void setName(string name);
        void setGrades(float grades[]);

        // Helpers
        float calcGradeAverage();

        // Static Methods
        static void printHello();
        static int incrementId();

        // Friend Functions and Classes
        friend void Professor::changeStudentGrade(college::Student& a, float g1, float g2);
        // friend class Professor; -> would turn all the class Professor as a friend
    };

    class StudentResearcher : public Student {
    private:
        string instructor;
        string research;
        double remuneration;
    public:
        StudentResearcher(string name);
        ~StudentResearcher();

        string getInstructor();
        string getResearch();
        double getRemuneration();

        void setInstructor(string instructor);
        void setResearch(string research);
        void setRemuneration(double remuneration);

        double calcMonthlyPayment();
    };

}

#endif