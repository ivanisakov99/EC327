#include "Problem1.h"
#include <iostream>

using namespace std;

// Returns true if characters in the string are ordered according to the ASCII character table 
// (from lower to higher values), and false otherwise.
bool isOrdered(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] > s[i + 1]){
            return false;
        }
    }
    return true;
}

// Returns true if the digits in the number are in increasing order, and false otherwise.
bool isOrdered(unsigned int i){
    return isOrdered(to_string(i));
}
