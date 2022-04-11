/*Problem Introduction
In this problem, your goal is to compute 𝐹𝑛 modulo 𝑚, where 𝑛 may be really huge: up to 1018. For such
values of 𝑛, an algorithm looping for 𝑛 iterations will not fit into one second for sure. Therefore we need to
avoid such a loop.
To get an idea how to solve this problem without going through all 𝐹𝑖 for 𝑖 from 0 to 𝑛, let’s see what
happens when 𝑚 is small — say, 𝑚 = 2 or 𝑚 = 3.
𝑖 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
𝐹𝑖 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
𝐹𝑖 mod 2 0 1 1 0 1 1 0 1 1 0 1 1 0 1 1 0
𝐹𝑖 mod 3 0 1 1 2 0 2 2 1 0 1 1 2 0 2 2 1
Take a detailed look at this table. Do you see? Both these sequences are periodic! For 𝑚 = 2, the period
is 011 and has length 3, while for 𝑚 = 3 the period is 01120221 and has length 8. Therefore, to compute,
say, 𝐹2015 mod 3 we just need to find the remainder of 2015 when divided by 8. Since 2015 = 251 · 8 + 7, we
conclude that 𝐹2015 mod 3 = 𝐹7 mod 3 = 1.
This is true in general: for any integer 𝑚 ≥ 2, the sequence 𝐹𝑛 mod 𝑚 is periodic. The period always
starts with 01 and is known as Pisano period.
*/

/*example
Input:
239 1000
Output :
	161
	Explanation :
	𝐹239 mod 1 000 = 39 679 027 332 006 820 581 608 740 953 902 289 877 834 488 152 161 (mod 1 000) = 161

*/

//#include "stdafx.h"
#include <iostream>
using namespace std;

// naive algorithm to calculate fibonacci series. can not calculate more than F94 as long long would exceed limit (2^64)
long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}


// the trick is to never calculate fibonacci series instead calculate modulo of fibonaci series and add them to find the modulo series. pisano period would help to skip calculating all fibonacci series
// and get to the anser quickly as modulo series is repetation most part.


long long get_fibonacci_huge_fast(long long n, long long m) {
	if (n <= 1)
		return n;


	long long previous = 0;
	long long current = 1;
	long long pisano_period_length = 0;
	long long result;

	for (long long i = 0; i < n - 1; ++i) {
		long long tmp_previous = previous % m ;
		previous = current % m ;
		
		current = (tmp_previous + current) % m  ;
		
		if ((current) == 1 && (previous)  == 0 && i != 0) {
			pisano_period_length = i + 1;
			break;
		}
	}

	//Debug Print
	//cout << "pisano_period_length:  " << pisano_period_length << endl;

	if (pisano_period_length != 0) {
		long long x = n % (pisano_period_length);

		if (x <= 1) {
			return x;
		}
		

		previous = 0;
		current = 1;

		for (long long i = 0; i < x-1 ; ++i) {
			long long tmp_previous = previous % m ;
			previous = current % m ;
			current = (tmp_previous + current) % m;
			result = current;

		}
		return result;
	}


	return current;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';

//	_gettch();
}
