#include <iostream>
#include "student.h"
using namespace std;

int college::Student::nextId = 1;

// Constructor
college::Student::Student(string name) {
    this->id = incrementId();
    this->setName(name);
    cout << "The object of " << name << " has been created" << endl;
}

// Destructor
college::Student::~Student() {
    cout << "The object of " << name << " has been destroyed" << endl;
}

// Getters (accessor methods)
int college::Student::getId() {
    return id;
}

string college::Student::getName() {
    return name;
}

float* college::Student::getGrades() {
    return grades;
}

// Setters (mutator methods)
void college::Student::setName(string name) {
    this->name = name;
}

void college::Student::setGrades(float grades[]) {
    this->grades[0] = grades[0];
    this->grades[1] = grades[1];
}

/* ************************************ */

float college::Student::calcGradeAverage() {
    float avg = 0;

    // for(int i = 0; i <= 1; i++)
    //     avg += grades[i];

    float* p = &grades[0];
    avg += *p;
    p++;
    avg += *p;

    return avg / 2;
}

double college::Student::calcMonthlyPayment() {
    return monthlyPayment;
}

void college::Student::printHello() {
    cout << "Hello, I'm the Student " << getName() << endl;
}

/* ************************************ */

int college::Student::incrementId() {
    // NOTE:
    // in the header file, we declared that incrementId()
    // is a static method. Thus, it can handle static members
    // Since nextId is a static member, we're fine
    return nextId++;
}

/* ************************************ */
/* ************************************ */
/*          STUDENT RESEARCHER          */
/* ************************************ */
/* ************************************ */

// Constructor
college::StudentResearcher::StudentResearcher(string name)
    : Student(name) {};

// Destructor
college::StudentResearcher::~StudentResearcher() {}

// Getters
string college::StudentResearcher::getInstructor() {
    return instructor;
}

string college::StudentResearcher::getResearch() {
    return research;
}

double college::StudentResearcher::getRemuneration() {
    return remuneration;
}

// Setters
void college::StudentResearcher::setInstructor(string instructor) {
    this->instructor = instructor;
}

void college::StudentResearcher::setResearch(string research) {
    this->research = research;
}

void college::StudentResearcher::setRemuneration(double remuneration) {
    this->remuneration = remuneration;
}

double college::StudentResearcher::calcMonthlyPayment() {
    return (monthlyPayment - (monthlyPayment * remuneration/100));
}

double college::StudentResearcher::calcMonthlyPayment(double bonus) {
    return (monthlyPayment - (monthlyPayment * remuneration/100)) - bonus;
}

// Method Override
void college::StudentResearcher::printHello() {
    cout << "Hello, I'm the StudentResearcher " << getName() << endl;
}