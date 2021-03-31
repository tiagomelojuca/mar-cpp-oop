#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float grade1;
    float grade2;
    float average;
public:
    // Constructor
    Student(int id, string name) {
        this->setId(id);
        this->setName(name);
        cout << "The object of " << name << " has been created" << endl;
    }

    // Destructor
    ~Student() {
        cout << "The object of " << name << " has been destroyed" << endl;
    }

    // Getters (accessor methods)
    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    float getGrade1() {
        return grade1;
    }

    float getGrade2() {
        return grade2;
    }

    // Setters (mutator methods)
    void setId(int id) {
        if(id < 0) id *= -1;
        this->id = id;
    }

    void setName(string name) {
        this->name = name;
    }

    void setGrade1(float grade) { // as copy
        grade1 = grade;
        grade = 0; // it's NOT going to change the arg var
    }

    void setGrade2(float &grade) { // as reference
        grade2 = grade;
        grade = 0; // it's going to change the arg var
    }

    /* ************************************ */

    float calcGradeAverage() { // return as value/copy
        return (grade1 + grade2) / 2;
    }

    float* calcGradeAverageRef() { // return a ref
        // float average = (grade1 + grade2) / 2;
        // return &average;
        // it's NOT going to work
        // the var "average" is destroyed when func ends
        average = (grade1 + grade2) / 2;
        // we've declared "average" as a class member, but
        // could be just a global var; doesn't really matter
        // could also be a param too, but, for the sake of simplicity,
        // we are going to use a class member/global var to avoid
        // mixing concepts of references in params and returns of funcs
        return &average;
    }

};

int main() {

    Student s1(123, "João");

    float g1 = 7.7;
    float g2 = 8.2;

    cout << "VARS BEFORE SETTERS ---- \n";
    cout << g1 << endl;
    cout << g2 << endl;
    cout << endl;

    s1.setGrade1(g1);
    s1.setGrade2(g2);

    cout << "CLASS MEMBERS ---- \n";
    cout << s1.getGrade1() << endl;
    cout << s1.getGrade2() << endl;
    cout << endl;

    cout << "VARS AFTER SETTERS ---- \n";
    cout << g1 << endl;
    cout << g2 << endl;
    cout << endl;

    cout << "GRADE AVERAGE ---- \n";
    cout << s1.calcGradeAverage() << endl;
    cout << s1.calcGradeAverageRef() << endl; // actually prints the address
    cout << *(s1.calcGradeAverageRef()) << endl; // now we are fine

    return 0;

}