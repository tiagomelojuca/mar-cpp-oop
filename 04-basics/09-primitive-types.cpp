#include <iostream>
using namespace std;

int main() {

    short x = 10000;
    // x += 10000000;
    // the above line would cause
    // the overflow of its primite type

    cout << x << endl;
    return 0;

}