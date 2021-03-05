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


#endif
