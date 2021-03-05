#include "mode.h"
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

void findModes(int input[], int size, int& frequency, int result[], int& result_count){
    int max = 0, r = 0;
    int y[10] = {0}, x[10] = {0};
    for (int i = 0; i < size; i++){
        y[i] = count(input, input + size, i);
    }
    for(int k = 0; k < size; k++){
        if (y[k] > max){
            max = y[k];
        }
    }

    int maxcount = count(y, y + size, max);

    for(int i = 0; i < size; i++){
        if (y[i] == max){
            x[r] = i;
            r++;
        }
    }
    frequency = max;
    result_count = maxcount;
    for(int i=0;i < size; i++){
        result[i] = x[i];
    }
}