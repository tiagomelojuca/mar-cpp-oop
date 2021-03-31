#include <iostream>
#include <string>
using namespace std;

class Student {
public: // we must inform, since the default is private
    int id;
    string name;
};

int main() {

    Student *s1 = new Student(); // goes to the HEAP
    Student s2; // goes to the STACK

    s1->id = 123; // since we are using a pointer
    s2.id = 124;

    cout << "s1 id: " << s1->id << endl;    // access the prop with a pointer
    cout << "s1 id: " << (*s1).id << endl;  // dereference to access the prop like an object
    cout << "s2 id: " << s2.id << endl;     // access the prop with the object itself
    cout << "s2 id: " << (&s2)->id << endl; // reference to access the prop like a pointer

    // We should free the allocation of s1
    // when it is not needed anymore, to
    // avoid a stack overflow
    // Since the main() is already finishing,
    // it doesn't really matter, but keep in mind
    // that the developer itself must handle
    // the mem management when using the HEAP
    delete s1;

    return 0;
}