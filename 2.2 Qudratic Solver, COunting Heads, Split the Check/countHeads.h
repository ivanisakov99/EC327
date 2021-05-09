#ifndef COUNTHEADS_H
#define COUNTHEADS_H

using namespace std;

int factorial(int n){
    if(n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}
long int choose(int n, int k){
    if(n < k){
        return 0;
    }

    long int x = factorial(n);

    long int y = factorial(k);

    long int z = factorial(n - k);
    
    return x / (y * z); 
}

#endif