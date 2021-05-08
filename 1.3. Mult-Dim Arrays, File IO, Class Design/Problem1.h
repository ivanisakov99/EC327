#ifndef Problem1_H
#define Problem1_H

#include <cmath>

float getNorm(float **matrix, int N){
	float result = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			result += matrix[i][j] * matrix[i][j];
		}
	} 
	return sqrt(result);
}

#endif
