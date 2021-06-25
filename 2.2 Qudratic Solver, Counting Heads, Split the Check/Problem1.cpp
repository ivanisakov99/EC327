#include <iostream>
#include <cstdlib>
#include "xFactor.h"

using namespace std;

int main() {
    char ans;
    int a = 0, b = 0, c = 0;
    double tol = 0, posx = 0, negx = 0;



    
    do{
        cout << "Input quadratic coefficients (a, b, c): ";
        cin >> a >> b >> c;
        
        cout << "Input tolerance: ";
        cin >> tol;
        
        posx = pos_x(a, b, c, tol);
        negx = neg_x(a, b, c, tol);
        
        cout << "Again? (y/n) ";
        cin >> ans;
    }while(ans == 'y');
    
    cout << "\nProgram ends\n" << endl;

    return 0;
}