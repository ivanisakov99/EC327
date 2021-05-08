#ifndef XFACTOR_H
#define XFACTOR_H

double sqrt(double n, double tol){
    double x = 0, min = 0, p = 1;
    if(n <= 0){
        return 0;
    }

    double y = (p + n/p)/2;
    double z = 1000;
    
    while (tol < z){
        x = y - n/y;
        
        if (x < 0){
            x = -x;
        }
        
        if(p <= (n/p)){
            min = p;
        }
        else{
            min = n/p;
        }
        
        z = x / min;
        
        y = (y + n/y)/2;
        
        p++;
    }

    return y;
}

double pos_x(int a, int b, int c, double tol){
    double x = 0, y1 = 0, y2 = 0, n = 0;
    
    n = b*b - 4*a*c;
    
    x = sqrt(n, tol);
    
    y1 = (-b + x)/(2*a);
    
    y2 = (-b - x)/(2*a);
    
    if(y1 > y2){
        return y1;
    }
    else{
        return y2;
    }
}

double neg_x(int a, int b, int c, double tol){
    double x = 0, y1 = 0, y2 = 0, n = 0;
    
    n = b*b - 4*a*c;
    
    x = sqrt(n, tol);
    
    y1 = (-b + x)/(2*a);
    
    y2 = (-b - x)/(2*a);
    
    if(y1 < y2){
        return y1;
    }
    else{
        return y2;
    }
}

#endif