//#include "stdafx.h"
#include <iostream>

long long fibo_rec(long long);


int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
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

	int x = n % 60; // because if you plot last digit of fibonacci there is periodicity of 60 [ pisano period of 10 is 60 ]
	if (x == 0)
	{
		x = 60;
	}
	long long previous = 0;
	long long current = 1;
	long long sum = 1;

	for (long long i = 0; i < x - 1; ++i) {
		long long tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
		sum += current;
	}
	return sum % 10;

// turned out the calling recursive functions is slow compare to upper method
//	return (fibo_rec(x + 2) - 1) % 10;  // sum of n fibonacci number is [ fibonacci(n+2) -1 ]

}

//fibonacci recursive implementation
long long fibo_rec(long long n) {
	if (n <= 1)
		return n;
	else
	{
		return  fibo_rec(n - 1) + fibo_rec(n - 2);
	}
	
}



int main() {
    long long n = 0;
    std::cin >> n;
    //std::cout << fibonacci_sum_naive(n);
	std::cout << fibonacci_sum_fast(n);
	//_gettch();
}
