#ifndef Problem3_h
#define Problem3_h

#include <math.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

//Calculates the Taylor expansion of the cosine of angle x (express in radians). The function calculates the Taylor series up to element y
float cos(float x, int y){
    float ans = 0;
    for (int i = 0; i <= y; i++){
        ans += (pow(-1, i) * pow(x, 2*i)) / factorial(2*i);
    }
    return ans;
}

#endif