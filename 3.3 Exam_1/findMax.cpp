#include <iostream>
#include <fstream>
#include <string>
#include "Q1.h"

using namespace std;

int findMax(){
    ifstream file1("temperature.txt");
    int max = -999, temp = 0;
    string date, city;

    if(file1.is_open()){
        while(!file1.eof()){
            file1 >> date >> city >> temp;
            if (temp > max){
                max = temp;
            }
        }
        file1.close();
    }
    else{
        cout << "error" << endl;
    }
    return max;
}