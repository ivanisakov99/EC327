#ifndef PROBLEM3_H
#define PROBLEM3_H

// Returns true if a given unsigned integer is prime, and false otherwise.
bool isPrime(unsigned int i) {
    static int counter = 2;
    if (i < 2) {
        return false;
    } else if (i == 2) {
        return true;
    } else if (i == counter) {
        return true;
    } else if (i % counter == 0) {
        return false;
    }

    counter++;
    return isPrime(i);
}

#endif
