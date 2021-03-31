#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
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

    Student *s1 = new Student(123, "João");
    Student s2(124, "Maria");

    cout << "s1 id: " << s1->getId() << endl;
    cout << "s1 name: " << s1->getName() << endl;

    cout << "s2 id: " << s2.getId() << endl;
    cout << "s2 name: " << s2.getName() << endl;

    delete s1;

    return 0;

}