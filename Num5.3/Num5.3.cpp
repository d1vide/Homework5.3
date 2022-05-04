#include "Header.h"

int main() {
	int n = 3, m = 4;
	int** array = new int* [n];
	for (int j = 0; j < m; j++) {
		array[j] = new int[m];
	}
	fillDoubleArray(array, n, m);
	printDoubleArray(array, n, m);
	for (int j = 0; j < n; j++) {
		delete[] array[j]; 
	}
}