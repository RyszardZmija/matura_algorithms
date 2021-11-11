#include "prime.h"

#include <vector>

std::vector<int> factorize(int n) {
	std::vector<int> factors;

	for (int d = 2; d * d <= n; ++d) {
		while (n % d == 0) {
			factors.push_back(d);
			n /= d;
		}
	}

	if (n > 1) {
		factors.push_back(n);
	}

	return factors;
}

std::vector<bool> sieve(int n) {
	std::vector<bool> is_prime(n + 1, true);

	is_prime[0] = false;
	is_prime[1] = false;

	for (int i = 2; i * i <= n; ++i) {
		if (is_prime[i]) {
			for (int j = i * i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}

	return is_prime;
}

bool primality_test(int n) {
	for (int d = 2; d * d <= n; ++d) {
		if (n % d == 0) {
			return false;
		}
	}

	return true;
}