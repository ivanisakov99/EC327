#include <iostream>
#include "Problem1.h"

using namespace std;


int main() {

	int DIM = 10;

	float **arr = new float*[DIM];
	for (int i = 0; i < DIM; i++) {
		arr[i] = new float[DIM];
	}

	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			arr[i][j] = i*j*1.3;
		}
	}

	cout << getNorm(arr, DIM) << endl;

	return 0;
}
