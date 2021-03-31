#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

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
};

#endif