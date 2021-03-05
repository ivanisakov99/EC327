#include "Problem3.h"
#include<iostream>

using namespace std;

Complex::Complex(){
    a = 0;
    b = 0;
}

Complex::Complex(int a, int b){
    this->a = a;
    this->b = b;
}

int Complex::getA(){
    return a;
}

void Complex::setA(int a){
    this->a = a;
}

int Complex::getB(){
    return b;
}

void Complex::setB(int b){
    this->b = b;
}

string Complex::toString() const{
    string s;
    if(b < 0){
        s = to_string(a) + to_string(b) + "i";
        return s;
    }else{
        s = to_string(a) + "+" + to_string(b) + "i";
        return s;
    }
}

Complex Complex::operator+(const Complex& c){
    int a = this->a + c.a;
    int b = this->b + c.b;
    return Complex(a,b);
}

bool Complex::operator==(const Complex& c){
    if(this->a != c.a){
        return false;
    }
    if(this->b != c.b){
        return false;
    }
    return true;
}
