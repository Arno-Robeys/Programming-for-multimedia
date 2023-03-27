#include "util.h"

int* max(int* x, int* y, int* z) {
	if (*x >= *y && *x >= *z) {
		return x;
	}
	else if (*y >= *x && *y >= *z) {
		return y;
	}
	else {
		return z;
	}
}



void minmax(int* x, int* y, int* z, int** p, int** q) {
	*p = min(x, y, z);
	*q = max(x, y, z);
}

void swap_min_and_max(int* x, int* y, int* z) {
	int* p = min(x, y, z);
	int* q = max(x, y, z);
	swap(p, q);
}