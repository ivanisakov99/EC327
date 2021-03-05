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

        bool x = contains_a_negative_radii(a);
        if(x){
            area_and_circ(area, circumference, a);
        }else{

            return 0;
        }
    }
}