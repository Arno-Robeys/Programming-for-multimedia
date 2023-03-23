#include <iostream>

bool is_prime(int x) {
	if (x < 2) {
		return false;
	}
	else {
		int k = 2;
		while (sqr(k) <= x) {
			if (is_divisible_by(x, k)) {
				return false;
			}
			++k;
		}
		return true;
	}
}

bool is_divisible_by(int n, int k) {
	return k != 0 ? n % k == 0 : false;
}

int next_unsigned() {
	int x;
	std::cin >> x;
	return x;
}

int sqr(int x) {
	return x * x;
}