#include <iostream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;
using namespace college;

int main() {

    vector<Student> myVector;

    Student a("João");
    Student b("José");
    Student c("Maria");

    myVector.push_back(a);
    myVector.push_back(b);
    myVector.push_back(c);

    for(int i = 0; i < myVector.size(); i++) {
        cout << myVector[i].getName() << endl;
    }

    myVector.pop_back();
    myVector.pop_back();
    myVector.pop_back();

    return 0;

}