#include <exception>
#include <iostream>
#include <string>

#include "Problem1.h"

using namespace std;

int main(int argc, char * argv[]) {
	string delim = "\n-----\n";

	cout << delim << "Testing Q2a" << endl;
	Account a1;

	cout << delim << "Testing Q2b" << endl;
	Account a2(12, "Gianluca", 54321);

	cout << delim << "Testing Q2c" << endl;
	a1.setId(13);
	a1.setOwner("Josh");
	a1.setBalance(99999);
	cout << a1.getId() << " " << a1.getOwner() << " " << a1.getBalance() << endl;
	cout << a2.getId() << " " << a2.getOwner() << " " << a2.getBalance() << endl;

	cout << delim << "Testing Q2d" << endl;
	cout << a1.enoughBalance(999999) << " " << a1.enoughBalance(99999) << " " << a1.enoughBalance(9) << endl;

	cout << delim << "Testing Q2e" << endl;
	a1.withdraw(99998);
	cout << a1.getBalance() << endl;
	try {
		a1.withdraw(99999);
	} catch (bad_exception e) {
		cout << "Caught bad_exception successfully." << endl;
	} catch (...) {
		cout << "Caught an exception, not a bad one though." << endl;
	}

	cout << delim << "Done!" << endl;

	return 0;
}
