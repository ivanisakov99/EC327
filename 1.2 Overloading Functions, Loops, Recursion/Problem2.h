#ifndef PROBLEM2_H
#define PROBLEM2_H

// Returns the greatest common divisor of two given numbers.
int gcd(int x, int y){
    if(y == 0){
        return 0;
    }

    int first = x;
    int second = y;
    while(first % second != 0){
        int modResult = first % second;
        first = second;
        second = modResult;
    }

    return second;
}

// Returns the least common multiple of two given numbers.
int lcm(int x, int y){
    if(y == 0){
        return 0;
    }
    
    return (x * y) / gcd(x, y);
}

#endif
