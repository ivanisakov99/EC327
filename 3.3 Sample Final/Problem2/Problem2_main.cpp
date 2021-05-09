#include <iostream>
#include <string>

#include "Problem2.h"

using namespace std;

int main(int argc, char * argv[]) {
	string delim = "\n-----\n";

	cout << delim << "Testing Q3a" << endl;
	// Only uncomment if you implement a no-argument constructor! 
	// Car c1;
	// c1.setColor("Brown");
	// c1.setMake("Fiat");
	// cout << c1.getColor() << " " << c1.getMake() << endl;


	cout << delim << "Testing Q3b" << endl;
	Car c2(1981, "Delorean DMC-12", "Silver", 88);
	cout << c2.getYear() << " " << c2.getColor() << " " << c2.getMake() << " " << c2.getMileage() << endl;


	cout << delim << "Testing Q3c" << endl;
	Car c3(c2);
	cout << c3.getYear() << " " << c3.getColor() << " " << c3.getMake() << " " << c3.getMileage() << endl;


	cout << delim << "Testing Q3d" << endl;
	// c1.move();
	c2.move();
	c3.move();


	cout << delim << "Testing Q3e" << endl;
	// cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;


	cout << delim << "Done!" << endl;

	return 0;
}
