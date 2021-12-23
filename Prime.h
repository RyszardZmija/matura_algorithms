#ifndef PRIME_H
#define PRIME_H

#include <vector>

class Prime {
public:
	static std::vector<bool> sieve(int);
	static std::vector<int> factorize(int);
	static bool primality_test(int);

private:
	
};
#endif