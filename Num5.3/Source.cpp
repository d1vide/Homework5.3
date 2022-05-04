#include "Header.h"

void fillDoubleArray(int** massive, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (massive[i][j] < 10) {
				massive[i][j] = rand() % 100 + 10;
			}
			else {
				massive[i][j] = rand() % 100;
			}
		}
	}
}

void printDoubleArray(int** massive, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << massive[i][j] << ' ';
		}
		std::cout << '\n';
	}
}