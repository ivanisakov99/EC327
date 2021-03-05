#include <iostream>
#include <fstream>
#include <string>
#include "Q1.h"

using namespace std;

float findAvg(string city){
    ifstream file1("temperature.txt");
    int temp = 0, c = 0;
    float temp1 = 0, avgt = 0;
    string city1, date;
    
    if (file1.is_open()){
        while (!file1.eof()){
            file1 >> date >> city1 >> temp;
            if (city1 == city){
                c++;
                temp1 += temp;
            }
        }
    }
    file1.close();
    if (c == 0){
        return -1;
    }
    avgt = temp1 / c;

        return avgt;
}