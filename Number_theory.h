#ifndef NUMBER_THEORY_H
#define NUMBER_THEORY_H

#include <vector>

class Number_theory {
public:
	static std::vector<int> get_digits(int);
	static int gcd(int, int);
	static int rec_fib(int);
	static int iter_fib(int);

private:

};
#endif