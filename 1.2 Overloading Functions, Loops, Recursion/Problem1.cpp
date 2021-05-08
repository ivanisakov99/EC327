#include <iostream>
#include <string>
#include "Problem1.h"

using namespace std;

int main() {
    string s1 = "abcd", s2 = "zcad";
    unsigned int i = 1234;

    cout << "Testing isOrdered(string) ..." << endl;
    cout << isOrdered(s1) << endl;

    cout << "Testing isOrdered(string) ..." << endl;
    cout << isOrdered(s2) << endl;

    cout << "Testing isOrdered(unsigned int) ..." << endl;
    cout << isOrdered(i) << endl;

    return 0;
}
