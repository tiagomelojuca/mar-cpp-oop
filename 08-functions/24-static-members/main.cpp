#include <iostream>
#include <string>
#include "student.h"
using namespace std;
using namespace college;

int main() {

    Student::printHello();

    Student s1("João");
    Student s2("Maria");

    Student::incrementId();
    Student::incrementId();
    Student::incrementId();
    
    Student s3("Pedro");

    cout << s1.getId() << endl;
    cout << s2.getId() << endl;
    cout << s3.getId() << endl;

    return 0;

}