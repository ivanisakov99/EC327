#include "cashier.h"
#include <iostream>

using namespace std;

double tip(double total, double percent){
    double ototal = 0;
    ototal = total + (total/100) * percent;
    return ototal;
}

double tax(double amount, char kind){
    double tax = 0;
    if(kind == 'l'){
        tax = (amount/100) * 12;
    }
    if (kind == 'f'){
        tax = (amount/100) * 9;
    }
    return tax;
}

double split(double total, int people){
    double value = total / people;
    return value;
}