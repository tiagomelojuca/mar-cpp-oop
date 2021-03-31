#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float grades[2] = {0.0, 0.0};
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

    float* getGrades() {
        return grades;
    }

    // Setters (mutator methods)
    void setId(int id) {
        if(id < 0) id *= -1;
        this->id = id;
    }

    void setName(string name) {
        this->name = name;
    }

    void setGrades(float grades[]) {
        this->grades[0] = grades[0];
        this->grades[1] = grades[1];
    }

    /* ************************************ */

    float calcGradeAverage() {
        float avg = 0;

        // for(int i = 0; i <= 1; i++)
        //     avg += grades[i];

        float* p = &grades[0];
        avg += *p;
        p++;
        avg += *p;

        return avg / 2;
    }

};

int main() {

    Student s1(123, "João");
    float g[2] = {10, 8.5};
    s1.setGrades(g);

    cout << s1.calcGradeAverage() << endl;

    return 0;

}