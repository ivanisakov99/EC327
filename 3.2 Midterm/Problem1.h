#ifndef Problem1_h
#define Problem1_h

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

//The function reads the temperatures.txt file and returns the highest temperature recorded in it.
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

//This function takes the name of a city as a parameter and reports the average temperature recorded in that city according to the temperatures.txt file. The function returns -1 if the city is not present.
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

#endif