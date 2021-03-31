#include <iostream>
#include <string>
#include "student.h"
using namespace std;
using namespace college;

int main() {

    StudentResearcher s1("José");
    s1.setInstructor("João");
    s1.setResearch("Water");
    s1.setRemuneration(500);

    cout << s1.getId() << endl;
    cout << s1.getName() << endl;

    cout << s1.getInstructor() << endl;
    cout << s1.getResearch() << endl;
    cout << s1.getRemuneration() << endl;

    return 0;

}