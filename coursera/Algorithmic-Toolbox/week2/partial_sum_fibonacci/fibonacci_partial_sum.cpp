#include "stdafx.h"
#include <iostream>
#include <vector>
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    if (to <= 1)
        return to;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < from - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    long long sum = current;

    for (long long i = 0; i < to - from; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int fibonacci_sum_fast(long long n) {
	if (n <= 1)
		return n;

	//int x = n % 60; // because if you plot last digit of fibonacci there is periodicity of 60 [ pisano period of 10 is 60 ]

	long long previous = 0;
	long long current = 1;
	long long sum = 1;

	for (long long i = 0; i < n - 2; ++i) {
		long long tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
		sum += current;
	}

	std::cout << sum << std::endl;
	return sum;
}

long long get_fibonacci_partial_sum_fast(long long from, long long to) {
	int sum_last_digit = 0;
	if (to <= 1)
	{
		return to;
	}
	else
	{
		return (fibonacci_sum_fast(to) - fibonacci_sum_fast(from));
	}
	
}


int main() {
    long long from, to;
    std::cin >> from >> to;
//    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
	std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
	_gettch();
}
