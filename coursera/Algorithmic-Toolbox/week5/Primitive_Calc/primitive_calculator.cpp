
//#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

//greedy implementation
vector<int> optimal_sequence(int n) {
  std::vector<int> sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

 // Dynamic Programming implementation
int DPPrimCalc(int n)
{
	int C_min_final = 0;
	vector<int> CalcMin;
	vector<char> sequence;
	vector<int> backtrack_v;
	backtrack_v.push_back(n);
	for (int i = 0; i <= n; i++)
	{
		CalcMin.push_back(0);
	}
	

	CalcMin[0] = -1;
	//sequence.push_back('c');
	sequence.push_back('c');
	// 
	for (int i = 1; i <= n; i++)
	{   

		if ((i % 2 == 0) & (i%3 != 0)	)
		{
			C_min_final = std::min(CalcMin[(i / 2)],CalcMin[(i-1)])  +1;
			if (CalcMin[(i / 2)] < CalcMin[(i - 1)]) { sequence.push_back('a'); }
			else { sequence.push_back('c'); }
		}
		else if ((i % 3 == 0)  & (i%2 != 0))
		{
			C_min_final = std::min(CalcMin[(i / 3)], CalcMin[(i - 1)]) + 1;
			if (CalcMin[(i / 3)] < CalcMin[(i - 1)]) { sequence.push_back('b'); }
			else { sequence.push_back('c'); }
		}
		else if ((i % 3 == 0)  & (i % 2 == 0))
		{
			C_min_final = std::min(CalcMin[(i / 3)],std::min(CalcMin[(i/2)], CalcMin[(i - 1)])) + 1;
			if (CalcMin[(i / 3)] < CalcMin[(i - 1)]) { sequence.push_back('b'); }
			else if (CalcMin[(i / 2)] < CalcMin[(i - 1)]) { sequence.push_back('a');}
			else { sequence.push_back('c'); }
		}
		else
		{
			C_min_final = CalcMin[i - 1] + 1;
			sequence.push_back('c');
		}
		CalcMin[i] = C_min_final;
	
	}

	// print the DP Table
	/* for (int i = 0; i < CalcMin.size(); i++)
	{															
		std::cout << i << '=' << CalcMin[i] << ',';
	}
	std::cout << '\n'; */


	//back tracking logic
	int value = n;
	int start_i = CalcMin[n];

	for (int i = start_i ; i > 0; i--)
	{
		if (sequence[value] == 'a')
		{
			value = value / 2;
			backtrack_v.push_back(value);

		}
		else if (sequence[value] == 'b')
		{
			value = value / 3;
			backtrack_v.push_back(value);
		}
		else if (sequence[value] == 'c')
		{
			value = value-1;
			backtrack_v.push_back(value);
		}
	}
	
	std::cout << C_min_final << std::endl;
	for (vector<int>::reverse_iterator it = backtrack_v.rbegin(); it != backtrack_v.rend(); it++)
	{
		std::cout << *it << ' ';
	}

	return 0 ;
}


int main() {
  int n;
  std::cin >> n;
  /*
  vector<int> sequence = optimal_sequence(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
  */

  DPPrimCalc(n);
  //std::cout << '\n' << result;



    getchar();
}
