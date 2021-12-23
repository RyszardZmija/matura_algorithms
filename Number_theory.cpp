#include "Number_theory.h"

#include <vector>
#include <algorithm>

std::vector<int> Number_theory::get_digits(int n) {
	std::vector<int> digits;

	while (n > 0) {
		digits.push_back(n % 10);
		n /= 10;
	}

	std::reverse(digits.begin(), digits.end());

	return digits;
}

int Number_theory::gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int Number_theory::rec_fib(int n) {
	if (n < 2) {
		return n;
	}
	else {
		return rec_fib(n - 1) + rec_fib(n - 2);
	}
}

int Number_theory::iter_fib(int n) {
	if (n < 2) {
		return n;
	}
	else {
		int a = 0, b = 1;

		for (int i = 0; i < n - 1; ++i) {
			int temp = b;
			b += a;
			a = temp;
		}

		return b;
	}
}