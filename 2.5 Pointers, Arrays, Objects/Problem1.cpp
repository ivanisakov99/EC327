#include "functions.h"
#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int main(){
    float a[3] = {0}, *area = new float[3], *circumference = new float[3];

    while (true){

        cout << "Enter three radii: " << endl;
        for (int i = 0; i < 3; i++){
            cin >> a[i];
        }

        if(!contains_a_negative_radii(a)){
            area_and_circ(area, circumference, a);
        }else{
            cout << "Contains a negative radius. Bye! Bye!" << endl;
            return 0;
        }
    }
}