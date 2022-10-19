#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void rotate(char * matrix[10][10]) {
	int i = 0;
	int j = 9;
	while (i < j) {
		for (int k = 0; k < 10; ++k) {
			int temp = matrix[i][k];
			matrix[i][k] = matrix[j][k];
			matrix[j][k] = temp;
		}
		++i;
		--j;
	}
	for (i = 0; i < 10; ++i) {
		for (j = i + 1; j < 10; ++j) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}