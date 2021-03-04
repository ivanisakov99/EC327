/* 
 * NOTE: This is a skeleton file that can be used for testing your code.
 * You do NOT turn in this file. Feel free to modify this file to include more tests
 * 
 * Be sure that your Q2.cpp compiles with this main and the given header file. You should
 * be able to compile with the following:
 * 
 * g++ -std=c++11 Q1main.cpp Q1.cpp -o Q1
 * 
 */
#include <iostream>
#include <string>
#include "Q1.h"

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
