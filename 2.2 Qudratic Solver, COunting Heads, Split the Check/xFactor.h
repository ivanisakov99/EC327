#ifndef XFACTOR_H
#define XFACTOR_H

using namespace std;

double sqrt(double n, double tol){
    if(n < 0){
        n = -n;
    }
    
    double p = 1;
    p = 0.5*(p + n/p);

    while(tol < abs(p - n/p) / min(p, n/p)){
        p = 0.5*(p + n/p);
    }
    
    return p;
}

double pos_x(int a, int b, int c, double tol){
    double x = 0,  n = 0;
    
    n = b*b - 4 * a * c;
    
    x = sqrt(n, tol);
    
    x = (-b + x)/(2*a);
    
    if(n >= 0){
        cout << "x = (" << x << ", ";
    }
    else{
        cout << "x = (" << x << "i, ";
    }

    return x;
}

double neg_x(int a, int b, int c, double tol){
    double x = 0, n = 0;
    
    n = b*b - 4 * a * c;
    
    x = sqrt(n, tol);
    
    x = (-b - x)/(2*a);
    
    if(n >= 0){
        cout << x << ")" << endl;
    }
    else{
        cout << x << "i)" << endl;
    }

    return x;
}

#endif