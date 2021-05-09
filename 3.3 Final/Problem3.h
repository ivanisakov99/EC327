#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

using namespace std;

class Complex {
private:
	int a;
	int b;
public: 
	// Q2a
	Complex();
	Complex(int a, int b);
	int getA();
	void setA(int a);
	int getB();
	void setB(int b);

  	

	// Q2b
	string toString() const;
	
	// Q2c
	Complex operator +(const Complex& c);
	bool operator ==(const Complex& c);

};

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

#endif
