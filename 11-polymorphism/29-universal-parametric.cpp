#include <iostream>
using namespace std;

template <class T> class Bet {
private:
    T numSorter;
public:

    Bet(T num) {
        numSorter = num;
    }

    T getNumSorter() {
        return numSorter;
    }
};

int main() {

    Bet<string> b1("yellow");
    Bet<int> b2(15);

    cout << b1.getNumSorter() << endl;
    cout << b2.getNumSorter() << endl;

    return 0;

}