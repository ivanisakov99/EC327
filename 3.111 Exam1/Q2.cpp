#include <iostream>
#include "Q2.h"

using namespace std;

int* merge(int* a1,int* a2, int size1, int size2){
    int* mArray = new int [size1 + size2];
    int i = 0, j = 0, z = 0;
    while(i <= size1 || j <= size2){
        if ((a1[i] <= a2[j]) && i <= size1){
            mArray[z] = a1[i];
            i++;
        }
        else{
            mArray[z] = a2[j];
            j++;
        }
        z++;
    }
    return mArray;
}