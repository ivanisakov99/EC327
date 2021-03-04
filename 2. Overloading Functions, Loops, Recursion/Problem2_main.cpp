/* 
 * NOTE: This is a skeleton file that can be used for testing your code.
 * You do NOT turn in this file. Feel free to modify this file to include more tests
 * 
 * Be sure that your Q2.cpp compiles with this main and the given header file. You should
 * be able to compile with the following:
 * 
 * g++ -std=c++11 Q2main.cpp Q2.cpp -o Q2
 * 
 */
#include <iostream>
#include "Problem2.h"

using namespace std;

int main() {
    int x = 42;
    int y = 100;

    cout << "Testing lcm(42, 100) ..." << endl;
    cout << lcm(x, y) << endl;

    return 0;
}
