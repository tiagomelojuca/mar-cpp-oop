#include <iostream>
#include "student.h"
using namespace std;

// Constructor
Student::Student(int id, string name) {
    this->setId(id);
    this->setName(name);
    cout << "The object of " << name << " has been created" << endl;
}

// Destructor
Student::~Student() {
    cout << "The object of " << name << " has been destroyed" << endl;
}

// Getters (accessor methods)
int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

float* Student::getGrades() {
    return grades;
}

// Setters (mutator methods)
void Student::setId(int id) {
    if(id < 0) id *= -1;
    this->id = id;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::setGrades(float grades[]) {
    this->grades[0] = grades[0];
    this->grades[1] = grades[1];
}

/* ************************************ */

float Student::calcGradeAverage() {
    float avg = 0;

    // for(int i = 0; i <= 1; i++)
    //     avg += grades[i];

    float* p = &grades[0];
    avg += *p;
    p++;
    avg += *p;

    return avg / 2;
}