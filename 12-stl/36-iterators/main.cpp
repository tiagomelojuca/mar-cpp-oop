#include <iostream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;
using namespace college;

int main() {

    vector<Student> myVector;
    vector<Student>::iterator i;

    Student a("João");
    Student b("José");
    Student c("Maria");

    myVector.push_back(a);
    myVector.push_back(b);
    myVector.push_back(c);

    for(i = myVector.begin(); i != myVector.end(); i++) {
        cout << (*i).getName() << endl;
    }

    myVector.pop_back();
    myVector.pop_back();
    myVector.pop_back();

    return 0;

}