#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
public:
    // Getters (accessor methods)
    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    // Setters (mutator methods)
    void setId(int id) {
        if(id < 0) id *= -1;
        this->id = id;
    }

    void setName(string name) {
        this->name = name;
    }
};

int main() {

    Student *s1 = new Student();
    Student s2;

    s1->setId(-123);
    s2.setId(124);

    cout << "s1 id: " << s1->getId() << endl;
    cout << "s2 id: " << s2.getId() << endl;

    delete s1;

    return 0;

}