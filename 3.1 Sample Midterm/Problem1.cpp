#include <iostream>

using namespace std;

void printEven(int numbers[], int numsize){
    for (int i = 0; i < numsize; i++){
        if (numbers[i] % 2 == 0){
            cout << numbers[i] << endl;
        }
    }
}