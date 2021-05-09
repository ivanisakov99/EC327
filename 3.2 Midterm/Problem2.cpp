#include <iostream>
#include "Problem2.h"

using namespace std;

int main() {
	int a[5] = {1,3,4,5,7};
	int b[6] = {0,2,5,8,9,12};

	int* c = merge(a,b,5,6);
	
	for(int i = 0; i < (5+6); i++) {
		cout << c[i] << endl;
	}
	
	return 0;
}