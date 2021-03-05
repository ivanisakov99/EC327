#include <iostream>
#include <string>
#include "Q1.h"
using namespace std;

int main() {
	cout << "The highest temperature recorded was " << findMax() << endl;
	cout << "The average temperature in Boston was " << findAvg("Boston") << endl;
	return 0;
}