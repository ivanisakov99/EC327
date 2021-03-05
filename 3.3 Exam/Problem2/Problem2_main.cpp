#include <iostream>
#include <string>
#include "Employee.h"
#include "Q3.h"

using namespace std;

int main(int argc, char * argv[]) {
	string delim = "\n-----\n";

	cout << delim << "Testing Q3a" << endl;
	Manager m1;
	m1.setIsSalaried(true);
	m1.setSalary(50000);

	cout << delim << "Testing Q3b" << endl;
	Manager m2("John Doe", 40, false);


	cout << delim << "Testing Q3c" << endl;

	cout << m1.pay(40) << endl;
	cout << m2.pay(20) << endl;

	cout << delim << "Testing Q3d" << endl;


	cout << m2 << endl;

	cout << delim << "Done!" << endl;

	return 0;
}
