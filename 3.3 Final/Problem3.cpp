#include "Problem3.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
	string delim = "\n-----\n";

	cout << delim << "Testing Q4a" << endl;

	Complex c1(3,-5);
	Complex c2;

	c2.setA(2);
	c2.setB(-7);

	cout << c1.getA() << " " << c1.getB() << endl;
	
	cout << delim << "Testing Q4b" << endl;

	cout << c1.toString() << endl;
	
	cout << delim << "Testing Q4c" << endl;

	Complex c3;

	c3 = c1 + c2;


	if(c1 == c2) {
		cout << "c1 and c2 are the same" << endl;
	}

	return 0;
}
