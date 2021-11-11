#include "number_theory.h"

#include <algorithm>

void reverse(std::vector<int> &vec) {
	for (int i = 0; i < vec.size() / 2; ++i) {
		int temp = vec[i];
		vec[i] = vec[vec.size() - 1 - i];
		vec[vec.size() - 1 - i] = temp;
	}
}

std::vector<int> get_digits(int n) {
	std::vector<int> digits;

	while (n > 0) {
		digits.push_back(n % 10);
		n /= 10;
	}
	
	std::reverse(digits.begin(), digits.end());

	return digits;
}

int gcd(int a, int b) {
	while (b > 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int rec_fib(int n) {
	if (n < 2) {
		return n;
	}
	else {
		return rec_fib(n - 1) + rec_fib(n - 2);
	}
}

int iter_fib(int n) {
	if (n < 2) {
		return n;
	}
	int a = 0, b = 1;

	for (int i = 0; i < n - 1; ++i) {
		int temp = b;
		b += a;
		a = temp;
	}

	return b;
}