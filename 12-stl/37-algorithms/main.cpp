#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;
using namespace college;

bool compareId(Student a, Student b) {
    if(a.getId() > b.getId()) {
        return true;
    }

    return false;
}

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
        cout << (*i).getId() << endl;
    }

    sort(myVector.begin(), myVector.end(), compareId);

    for(i = myVector.begin(); i != myVector.end(); i++) {
        cout << (*i).getId() << endl;
    }

    myVector.pop_back();
    myVector.pop_back();
    myVector.pop_back();

    return 0;

}