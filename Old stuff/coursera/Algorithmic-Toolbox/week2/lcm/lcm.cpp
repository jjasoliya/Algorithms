// lcm.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

long long lcm_naive(int a, int b) {
	for (long l = 1; l <= (long long)a * b; ++l)
		if (l % a == 0 && l % b == 0)
			return l;

	return (long long)a * b;
}

// find greatest common divisor first
int gcd_fast(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		int c = a % b;
		gcd_fast(b, c);
	}
}


// lcm fast --> devide a/gcd and multiply it with other number.
long long lcm_fast(int a, int b) {
	int gcd = gcd_fast(a, b);
	return (long long)(a / gcd) * b;
}



int main() {
	int a, b;
	std::cin >> a >> b;
	//std::cout << lcm_naive(a, b) << std::endl;
	std::cout << lcm_fast(a, b) << std::endl;

	//_gettch();  
	return 0;
}


