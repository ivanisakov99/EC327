#include <iostream>
#include <string>
#include <cstring>
#include <bitset>

using namespace std;

char* toBin(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        bitset<8> bit = s[i];
        result.append(bit.to_string());
    }
    char* sresult = new char[result.size() + 1];
    strcpy(sresult, result.c_str());
    return sresult;
}