#include <exception>
#include <iostream>
#include <string>

#include "Problem1.h"

using namespace std;

int main(int argc, char * argv[]) {
	string delim = "\n-----\n";

	cout << delim << "Testing Q2a" << endl;
	Rectangle r1;

	r1.setHeight(5);
	r1.setWidth(2);
	r1.setX(1);
	r1.setY(1);

	cout << r1.getHeight() << r1.getWidth() << r1.getX() << r1.getY() << endl;

	Rectangle r2(7,8,2,2);

	cout << delim << "Testing Q2b" << endl;

	cout << "r1's perimeter is " << r1.getPerimeter() << endl; 
	cout << "r1's area is " << r1.getArea() << endl; 

	cout << delim << "Testing Q2c" << endl;

	r1.checkOverlap(r2);

	return 0;
}
