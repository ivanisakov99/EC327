#include <iostream>
#include "Q3.h"
#include <math.h>

using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

float cos(float x, int y){
    float ans = 0;
    for (int i = 0; i <= y; i++){
        ans += (pow(-1, i) * pow(x, 2*i)) / factorial(2*i);
    }
    return ans;
}