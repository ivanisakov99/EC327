#include <iostream>
#include <string>
#include "Problem1.h"

using namespace std;

int main() {
    string s = "testing";
    unsigned int i = 4235;

    cout << "Testing isOrdered(string) ..." << endl;
    cout << isOrdered(s) << endl;

    cout << "Testing isOrdered(unsigned int) ..." << endl;
    cout << isOrdered(i) << endl;

    return 0;
}
